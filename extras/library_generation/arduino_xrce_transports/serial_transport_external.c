#include <uxr/client/profile/transport/serial/serial_transport_external.h>
#include <uxr/client/profile/transport/serial/serial_transport_platform.h>

// Place here your includes

bool uxr_init_serial_platform(struct uxrSerialPlatform* platform, int fd, uint8_t remote_addr, uint8_t local_addr)
{
    // Place here your initialization platform code
    // Return true if success
    return arduino_serial_platform_open();
}

bool uxr_close_serial_platform(struct uxrSerialPlatform* platform)
{
    // Place here your closing platform code
    // Return true if success
    return arduino_serial_platform_close();
}

size_t uxr_write_serial_data_platform(uxrSerialPlatform* platform, uint8_t* buf, size_t len, uint8_t* errcode)
{
    // Place here your writing bytes platform code
    // Return number of bytes written
    return arduino_serial_platform_write(buf, len, errcode);
}

size_t uxr_read_serial_data_platform(uxrSerialPlatform* platform, uint8_t* buf, size_t len, int timeout, uint8_t* errcode)
{
    // Place here your reading bytes platform code
    // Return number of bytes read (max bytes: len)
    return arduino_serial_platform_read(buf, len, timeout, errcode);
}
