/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCK_I2C_H
#define _MOCK_I2C_H

#include "unity.h"
#include "driver/i2c.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 ||   \
    (__GNUC__ == 4 && \
     (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

#ifdef __cplusplus
extern "C" {
#endif

void mock_i2c_Init(void);
void mock_i2c_Destroy(void);
void mock_i2c_Verify(void);

#define i2c_master_write_to_device_IgnoreAndReturn(cmock_retval) \
    i2c_master_write_to_device_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void i2c_master_write_to_device_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line,
                                                     esp_err_t cmock_to_return);
#define i2c_master_write_to_device_StopIgnore() \
    i2c_master_write_to_device_CMockStopIgnore()
void i2c_master_write_to_device_CMockStopIgnore(void);
#define i2c_master_write_to_device_ExpectAndReturn(i2c_num, device_address,            \
                                                   write_buffer, write_size,           \
                                                   ticks_to_wait, cmock_retval)        \
    i2c_master_write_to_device_CMockExpectAndReturn(__LINE__, i2c_num, device_address, \
                                                    write_buffer, write_size,          \
                                                    ticks_to_wait, cmock_retval)
void i2c_master_write_to_device_CMockExpectAndReturn(
    UNITY_LINE_TYPE cmock_line, i2c_port_t i2c_num, uint8_t device_address,
    const uint8_t *write_buffer, size_t write_size, TickType_t ticks_to_wait,
    esp_err_t cmock_to_return);
typedef esp_err_t (*CMOCK_i2c_master_write_to_device_CALLBACK)(
    i2c_port_t i2c_num, uint8_t device_address, const uint8_t *write_buffer,
    size_t write_size, TickType_t ticks_to_wait, int cmock_num_calls);
void i2c_master_write_to_device_AddCallback(CMOCK_i2c_master_write_to_device_CALLBACK Callback);
void i2c_master_write_to_device_Stub(CMOCK_i2c_master_write_to_device_CALLBACK Callback);
#define i2c_master_write_to_device_StubWithCallback \
    i2c_master_write_to_device_Stub
#define i2c_master_write_to_device_IgnoreArg_i2c_num() \
    i2c_master_write_to_device_CMockIgnoreArg_i2c_num(__LINE__)
void i2c_master_write_to_device_CMockIgnoreArg_i2c_num(UNITY_LINE_TYPE cmock_line);
#define i2c_master_write_to_device_IgnoreArg_device_address() \
    i2c_master_write_to_device_CMockIgnoreArg_device_address(__LINE__)
void i2c_master_write_to_device_CMockIgnoreArg_device_address(UNITY_LINE_TYPE cmock_line);
#define i2c_master_write_to_device_IgnoreArg_write_buffer() \
    i2c_master_write_to_device_CMockIgnoreArg_write_buffer(__LINE__)
void i2c_master_write_to_device_CMockIgnoreArg_write_buffer(UNITY_LINE_TYPE cmock_line);
#define i2c_master_write_to_device_IgnoreArg_write_size() \
    i2c_master_write_to_device_CMockIgnoreArg_write_size(__LINE__)
void i2c_master_write_to_device_CMockIgnoreArg_write_size(UNITY_LINE_TYPE cmock_line);
#define i2c_master_write_to_device_IgnoreArg_ticks_to_wait() \
    i2c_master_write_to_device_CMockIgnoreArg_ticks_to_wait(__LINE__)
void i2c_master_write_to_device_CMockIgnoreArg_ticks_to_wait(UNITY_LINE_TYPE cmock_line);
#define i2c_master_read_from_device_IgnoreAndReturn(cmock_retval) \
    i2c_master_read_from_device_CMockIgnoreAndReturn(__LINE__, cmock_retval)
void i2c_master_read_from_device_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line,
                                                      esp_err_t cmock_to_return);
#define i2c_master_read_from_device_StopIgnore() \
    i2c_master_read_from_device_CMockStopIgnore()
void i2c_master_read_from_device_CMockStopIgnore(void);
#define i2c_master_read_from_device_ExpectAndReturn(port, address, read_buffer, \
                                                    read_size, ticks_to_wait,   \
                                                    cmock_retval)               \
    i2c_master_read_from_device_CMockExpectAndReturn(__LINE__, port, address,   \
                                                     read_buffer, read_size,    \
                                                     ticks_to_wait, cmock_retval)
void i2c_master_read_from_device_CMockExpectAndReturn(
    UNITY_LINE_TYPE cmock_line, i2c_port_t port, uint8_t address, uint8_t *read_buffer,
    size_t read_size, TickType_t ticks_to_wait, esp_err_t cmock_to_return);
typedef esp_err_t (*CMOCK_i2c_master_read_from_device_CALLBACK)(
    i2c_port_t port, uint8_t address, uint8_t *read_buffer, size_t read_size,
    TickType_t ticks_to_wait, int cmock_num_calls);
void i2c_master_read_from_device_AddCallback(CMOCK_i2c_master_read_from_device_CALLBACK Callback);
void i2c_master_read_from_device_Stub(CMOCK_i2c_master_read_from_device_CALLBACK Callback);
#define i2c_master_read_from_device_StubWithCallback \
    i2c_master_read_from_device_Stub
#define i2c_master_read_from_device_IgnoreArg_port() \
    i2c_master_read_from_device_CMockIgnoreArg_port(__LINE__)
void i2c_master_read_from_device_CMockIgnoreArg_port(UNITY_LINE_TYPE cmock_line);
#define i2c_master_read_from_device_IgnoreArg_address() \
    i2c_master_read_from_device_CMockIgnoreArg_address(__LINE__)
void i2c_master_read_from_device_CMockIgnoreArg_address(UNITY_LINE_TYPE cmock_line);
#define i2c_master_read_from_device_IgnoreArg_read_buffer() \
    i2c_master_read_from_device_CMockIgnoreArg_read_buffer(__LINE__)
void i2c_master_read_from_device_CMockIgnoreArg_read_buffer(UNITY_LINE_TYPE cmock_line);
#define i2c_master_read_from_device_IgnoreArg_read_size() \
    i2c_master_read_from_device_CMockIgnoreArg_read_size(__LINE__)
void i2c_master_read_from_device_CMockIgnoreArg_read_size(UNITY_LINE_TYPE cmock_line);
#define i2c_master_read_from_device_IgnoreArg_ticks_to_wait() \
    i2c_master_read_from_device_CMockIgnoreArg_ticks_to_wait(__LINE__)
void i2c_master_read_from_device_CMockIgnoreArg_ticks_to_wait(UNITY_LINE_TYPE cmock_line);

#ifdef __cplusplus
}
#endif

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 ||   \
    (__GNUC__ == 4 && \
     (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
