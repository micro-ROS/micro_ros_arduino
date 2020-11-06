import sys
import pathlib
import json
import re 

types = {}
types_msg_or_service = {}

for msg_file in sys.stdin:
    msg_file = str(pathlib.Path().absolute()) + "/" + msg_file.strip()
    msg_name = msg_file.split("/")[-1].split(".")[0]
    msg_pkg = msg_file.split("/")[-3]
    dict_index = msg_pkg + "/" + msg_name
    types[dict_index] = []
    types_msg_or_service[dict_index] = msg_file.split("/")[-2]
    with open(msg_file, 'r') as msg_file_content:
        file_content = msg_file_content.read()
        msg_components = [x for x in file_content.split("\n") if not x.startswith("#") and not x.strip().startswith("#") and x != '' and '=' not in x]
        for component in msg_components:
            comp_type = re.sub("\[.*\]", "", component.split()[0])
            comp_is_sequence = True if re.match(r".*\[\]", component.split()[0]) else False
            comp_is_array = True if re.match(r".*\[.+\]", component.split()[0]) else False
            comp_array_len = int(re.match(r".*\[(.+)\]", component.split()[0])[1]) if comp_is_array else 0
            comp_name = component.split()[1]
            types[dict_index].append({"name": comp_name, "type": comp_type, "sequence": comp_is_sequence, "array": comp_is_array, "array_len": comp_array_len})

type_pkg_names = list(types.keys())
type_names = [x.split("/")[1] for x in type_pkg_names]

basic_types = ['float32', 'int64', 'uint8', 'int32', 'uint16', 'float64', 'int8', 'uint64', 'byte', 'wstring', 'char', 'string', 'int16', 'uint32', 'bool']

def get_type_namespaced(type_name, parent_type):
    namespaced = True if len(type_name.split("/")) > 1 else False
    if not namespaced and type_name not in basic_types:
        parent_namespace = parent_type.split("/")[0]
        type_name = "/".join([parent_namespace,type_name])
    return type_name


def get_components_from_typename(type_name):
    complete_type_name = [x for x in type_pkg_names if type_name == x]
    if len(complete_type_name) > 1:
        print(complete_type_name)
        print(parent_type)
        sys.exit()
    if len(complete_type_name):
        return types[complete_type_name[0]]
    else:
        print("Not found type: " + type_name )
        return []

def check_sequences_recursive(type_name, parent_type, c_string, i):
    for c in get_components_from_typename(type_name):
        component_type_name = get_type_namespaced(c["type"], type_name)
        seq_array = " -> Array {:d}".format(c["array_len"]) if c["array"] else " -> Sequence" if c["sequence"] else ""
        print("//{:s}{:s} [{:s}]{:s}".format(i*"\t", c["name"], component_type_name, seq_array)) 
       
        c_string_new = "{:s}{:s}".format(c_string, c["name"])
        separator = "->" if c["sequence"] else "."

        if c["sequence"] and c["type"] not in basic_types:
            print(i*"\t" + "{0:s} = {2:s}__{1:s}__{3:s}__Sequence__create(42);".format(c_string_new, types_msg_or_service[component_type_name], *component_type_name.split("/")))
        elif c["type"] == "string":
            if c["sequence"]:
                print(i*"\t" + "{0:s} = rosidl_runtime_c__String__Sequence__create(42);".format(c_string_new))
                print(i*"\t" + "rosidl_runtime_c__String__assign(&{:s}->data[i], \"my_text\");".format("{:s}{:s}".format(c_string, c["name"])))
            else:
                print(i*"\t" + "rosidl_runtime_c__String__assign(&{:s}, \"my_text\");".format("{:s}{:s}".format(c_string, c["name"])))
        elif c["type"] in basic_types and c["sequence"]:
            print(i*"\t" + "rosidl_runtime_c__{:s}__Sequence__init(&{:s}, 42);".format(c["type"], c_string + c["name"]))
        elif c["type"] in basic_types and not c["sequence"]:
            print(i*"\t" + "{0:s} = ;".format(c_string_new))

        if c["sequence"]:
            separator = separator + "data[i]."

        if c["type"] not in basic_types:
            check_sequences_recursive(component_type_name, type_name, c_string_new + separator , i+1)

for msg,components in types.items():
    print("\n//--- " + msg + " ---")
    print("{0:s}__{2:s}__{1:s} * msg = {0:s}__{2:s}__{1:s}__create();".format(*msg.split("/"), types_msg_or_service[msg]))
    check_sequences_recursive(msg, '', "msg->", 0)
