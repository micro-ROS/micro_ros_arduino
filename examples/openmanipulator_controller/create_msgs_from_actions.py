import sys
import pathlib

import os
import errno

def create_file(filename, content):
    filename = str(pathlib.Path().absolute()) + "/" + filename 
    if not os.path.exists(os.path.dirname(filename)):
        try:
            os.makedirs(os.path.dirname(filename))
        except OSError as exc: # Guard against race condition
            if exc.errno != errno.EEXIST:
                raise
    with open(filename, "w") as f:
        f.write(content)

send_goal_request = """
unique_identifier_msgs/UUID goal_id
{:s}/{:s}_Goal goal
"""

send_goal_response = """
bool accepted
builtin_interfaces/Time stamp
"""

get_result_request = """
unique_identifier_msgs/UUID goal_id
"""

get_result_response = """
int8_t status
{:s}/{:s}_Result result
"""

feedback_msg = """
unique_identifier_msgs/UUID goal_id
{:s}/{:s}_Feedback feedback
"""

for msg_file in sys.stdin:
    msg_file = str(pathlib.Path().absolute()) + "/" + msg_file.strip()
    print(msg_file)
    msg_name = msg_file.split("/")[-1].split(".")[0]
    msg_pkg = msg_file.split("/")[-3]
    path = "/".join(msg_file.split("/")[-3:-1])
    path = "outputfolder/" +  path
    with open(msg_file, 'r') as msg_file_content:
        file_content = msg_file_content.read()
        create_file(path + "/" + msg_name + "_Goal.msg", file_content.split("---")[0])
        create_file(path + "/" + msg_name + "_Result.msg", file_content.split("---")[1])
        create_file(path + "/" + msg_name + "_Feedback.msg", file_content.split("---")[2])

        create_file(path + "/" + msg_name + "_SendGoal_Request.msg", send_goal_request.format(msg_pkg, msg_name))
        create_file(path + "/" + msg_name + "_SendGoal_Response.msg", send_goal_response)

        create_file(path + "/" + msg_name + "_GetResult_Request.msg", get_result_request)
        create_file(path + "/" + msg_name + "_GetResult_Response.msg",get_result_response.format(msg_pkg, msg_name))
    
        create_file(path + "/" + msg_name + "_FeedbackMessage.msg", feedback_msg.format(msg_pkg, msg_name))
