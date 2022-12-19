/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "cmock.h"
#include "driver/mock_i2c.h"

static const char *CMockString_address = "address";
static const char *CMockString_device_address = "device_address";
static const char *CMockString_i2c_master_read_from_device = "i2c_master_read_from_device";
static const char *CMockString_i2c_master_write_to_device = "i2c_master_write_to_device";
static const char *CMockString_i2c_num = "i2c_num";
static const char *CMockString_port = "port";
static const char *CMockString_read_buffer = "read_buffer";
static const char *CMockString_read_size = "read_size";
static const char *CMockString_ticks_to_wait = "ticks_to_wait";
static const char *CMockString_write_buffer = "write_buffer";
static const char *CMockString_write_size = "write_size";

typedef struct _CMOCK_i2c_master_write_to_device_CALL_INSTANCE {
    UNITY_LINE_TYPE LineNumber;
    esp_err_t ReturnVal;
    i2c_port_t Expected_i2c_num;
    uint8_t Expected_device_address;
    const uint8_t *Expected_write_buffer;
    size_t Expected_write_size;
    TickType_t Expected_ticks_to_wait;
    char IgnoreArg_i2c_num;
    char IgnoreArg_device_address;
    char IgnoreArg_write_buffer;
    char IgnoreArg_write_size;
    char IgnoreArg_ticks_to_wait;

} CMOCK_i2c_master_write_to_device_CALL_INSTANCE;

typedef struct _CMOCK_i2c_master_read_from_device_CALL_INSTANCE {
    UNITY_LINE_TYPE LineNumber;
    esp_err_t ReturnVal;
    i2c_port_t Expected_port;
    uint8_t Expected_address;
    uint8_t *Expected_read_buffer;
    size_t Expected_read_size;
    TickType_t Expected_ticks_to_wait;
    char IgnoreArg_port;
    char IgnoreArg_address;
    char IgnoreArg_read_buffer;
    char IgnoreArg_read_size;
    char IgnoreArg_ticks_to_wait;

} CMOCK_i2c_master_read_from_device_CALL_INSTANCE;

static struct mock_i2cInstance {
    char i2c_master_write_to_device_IgnoreBool;
    esp_err_t i2c_master_write_to_device_FinalReturn;
    char i2c_master_write_to_device_CallbackBool;
    CMOCK_i2c_master_write_to_device_CALLBACK i2c_master_write_to_device_CallbackFunctionPointer;
    int i2c_master_write_to_device_CallbackCalls;
    CMOCK_MEM_INDEX_TYPE i2c_master_write_to_device_CallInstance;
    char i2c_master_read_from_device_IgnoreBool;
    esp_err_t i2c_master_read_from_device_FinalReturn;
    char i2c_master_read_from_device_CallbackBool;
    CMOCK_i2c_master_read_from_device_CALLBACK i2c_master_read_from_device_CallbackFunctionPointer;
    int i2c_master_read_from_device_CallbackCalls;
    CMOCK_MEM_INDEX_TYPE i2c_master_read_from_device_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void mock_i2c_Verify(void)
{
    UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
    CMOCK_MEM_INDEX_TYPE call_instance;
    call_instance = Mock.i2c_master_write_to_device_CallInstance;
    if (Mock.i2c_master_write_to_device_IgnoreBool)
        call_instance = CMOCK_GUTS_NONE;
    if (CMOCK_GUTS_NONE != call_instance) {
        UNITY_SET_DETAIL(CMockString_i2c_master_write_to_device);
        UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
    }
    if (Mock.i2c_master_write_to_device_CallbackFunctionPointer != NULL) {
        call_instance = CMOCK_GUTS_NONE;
        (void)call_instance;
    }
    call_instance = Mock.i2c_master_read_from_device_CallInstance;
    if (Mock.i2c_master_read_from_device_IgnoreBool)
        call_instance = CMOCK_GUTS_NONE;
    if (CMOCK_GUTS_NONE != call_instance) {
        UNITY_SET_DETAIL(CMockString_i2c_master_read_from_device);
        UNITY_TEST_FAIL(cmock_line, CMockStringCalledLess);
    }
    if (Mock.i2c_master_read_from_device_CallbackFunctionPointer != NULL) {
        call_instance = CMOCK_GUTS_NONE;
        (void)call_instance;
    }
}

void mock_i2c_Init(void)
{
    mock_i2c_Destroy();
}

void mock_i2c_Destroy(void)
{
    CMock_Guts_MemFreeAll();
    memset(&Mock, 0, sizeof(Mock));
    Mock.i2c_master_write_to_device_IgnoreBool = (char)1;
    Mock.i2c_master_read_from_device_IgnoreBool = (char)1;
}

esp_err_t i2c_master_write_to_device(i2c_port_t i2c_num, uint8_t device_address,
                                     const uint8_t *write_buffer,
                                     size_t write_size, TickType_t ticks_to_wait)
{
    UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance;
    UNITY_SET_DETAIL(CMockString_i2c_master_write_to_device);
    cmock_call_instance = (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)
        CMock_Guts_GetAddressFor(Mock.i2c_master_write_to_device_CallInstance);
    Mock.i2c_master_write_to_device_CallInstance = CMock_Guts_MemNext(
        Mock.i2c_master_write_to_device_CallInstance);
    if (Mock.i2c_master_write_to_device_IgnoreBool) {
        UNITY_CLR_DETAILS();
        if (cmock_call_instance == NULL)
            return Mock.i2c_master_write_to_device_FinalReturn;
        memcpy((void *)(&Mock.i2c_master_write_to_device_FinalReturn),
               (void *)(&cmock_call_instance->ReturnVal),
               sizeof(esp_err_t[sizeof(cmock_call_instance->ReturnVal) == sizeof(esp_err_t) ? 1 : -1])); /* add esp_err_t to :treat_as_array if this causes an error */
        return cmock_call_instance->ReturnVal;
    }
    if (!Mock.i2c_master_write_to_device_CallbackBool &&
        Mock.i2c_master_write_to_device_CallbackFunctionPointer != NULL) {
        esp_err_t cmock_cb_ret = Mock.i2c_master_write_to_device_CallbackFunctionPointer(
            i2c_num, device_address, write_buffer, write_size, ticks_to_wait,
            Mock.i2c_master_write_to_device_CallbackCalls++);
        UNITY_CLR_DETAILS();
        return cmock_cb_ret;
    }
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
    cmock_line = cmock_call_instance->LineNumber;
    if (!cmock_call_instance->IgnoreArg_i2c_num) {
        UNITY_SET_DETAILS(CMockString_i2c_master_write_to_device, CMockString_i2c_num);
        UNITY_TEST_ASSERT_EQUAL_MEMORY((void *)(&cmock_call_instance->Expected_i2c_num),
                                       (void *)(&i2c_num), sizeof(i2c_port_t),
                                       cmock_line, CMockStringMismatch);
    }
    if (!cmock_call_instance->IgnoreArg_device_address) {
        UNITY_SET_DETAILS(CMockString_i2c_master_write_to_device,
                          CMockString_device_address);
        UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_device_address,
                                     device_address, cmock_line, CMockStringMismatch);
    }
    if (!cmock_call_instance->IgnoreArg_write_buffer) {
        UNITY_SET_DETAILS(CMockString_i2c_master_write_to_device,
                          CMockString_write_buffer);
        if (cmock_call_instance->Expected_write_buffer == NULL) {
            UNITY_TEST_ASSERT_NULL(write_buffer, cmock_line, CMockStringExpNULL);
        } else {
            UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_write_buffer,
                                               write_buffer, 1, cmock_line,
                                               CMockStringMismatch);
        }
    }
    if (!cmock_call_instance->IgnoreArg_write_size) {
        UNITY_SET_DETAILS(CMockString_i2c_master_write_to_device, CMockString_write_size);
        UNITY_TEST_ASSERT_EQUAL_MEMORY((void *)(&cmock_call_instance->Expected_write_size),
                                       (void *)(&write_size), sizeof(size_t),
                                       cmock_line, CMockStringMismatch);
    }
    if (!cmock_call_instance->IgnoreArg_ticks_to_wait) {
        UNITY_SET_DETAILS(CMockString_i2c_master_write_to_device,
                          CMockString_ticks_to_wait);
        UNITY_TEST_ASSERT_EQUAL_MEMORY((void *)(&cmock_call_instance->Expected_ticks_to_wait),
                                       (void *)(&ticks_to_wait), sizeof(TickType_t),
                                       cmock_line, CMockStringMismatch);
    }
    if (Mock.i2c_master_write_to_device_CallbackFunctionPointer != NULL) {
        cmock_call_instance->ReturnVal = Mock.i2c_master_write_to_device_CallbackFunctionPointer(
            i2c_num, device_address, write_buffer, write_size, ticks_to_wait,
            Mock.i2c_master_write_to_device_CallbackCalls++);
    }
    UNITY_CLR_DETAILS();
    return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_i2c_master_write_to_device(
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance,
    i2c_port_t i2c_num, uint8_t device_address, const uint8_t *write_buffer,
    size_t write_size, TickType_t ticks_to_wait);
void CMockExpectParameters_i2c_master_write_to_device(
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance,
    i2c_port_t i2c_num, uint8_t device_address, const uint8_t *write_buffer,
    size_t write_size, TickType_t ticks_to_wait)
{
    memcpy((void *)(&cmock_call_instance->Expected_i2c_num), (void *)(&i2c_num),
           sizeof(i2c_port_t[sizeof(i2c_num) == sizeof(i2c_port_t) ? 1 : -1])); /* add i2c_port_t to :treat_as_array if this causes an error */
    cmock_call_instance->IgnoreArg_i2c_num = 0;
    cmock_call_instance->Expected_device_address = device_address;
    cmock_call_instance->IgnoreArg_device_address = 0;
    cmock_call_instance->Expected_write_buffer = write_buffer;
    cmock_call_instance->IgnoreArg_write_buffer = 0;
    memcpy((void *)(&cmock_call_instance->Expected_write_size), (void *)(&write_size),
           sizeof(size_t[sizeof(write_size) == sizeof(size_t) ? 1 : -1])); /* add size_t to :treat_as_array if this causes an error */
    cmock_call_instance->IgnoreArg_write_size = 0;
    memcpy((void *)(&cmock_call_instance->Expected_ticks_to_wait),
           (void *)(&ticks_to_wait),
           sizeof(TickType_t[sizeof(ticks_to_wait) == sizeof(TickType_t) ? 1 : -1])); /* add TickType_t to :treat_as_array if this causes an error */
    cmock_call_instance->IgnoreArg_ticks_to_wait = 0;
}

void i2c_master_write_to_device_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line,
                                                     esp_err_t cmock_to_return)
{
    CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(
        sizeof(CMOCK_i2c_master_write_to_device_CALL_INSTANCE));
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            cmock_guts_index);
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
    memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
    Mock.i2c_master_write_to_device_CallInstance =
        CMock_Guts_MemChain(Mock.i2c_master_write_to_device_CallInstance,
                            cmock_guts_index);
    Mock.i2c_master_write_to_device_IgnoreBool = (char)0;
    cmock_call_instance->LineNumber = cmock_line;
    cmock_call_instance->ReturnVal = cmock_to_return;
    Mock.i2c_master_write_to_device_IgnoreBool = (char)1;
}

void i2c_master_write_to_device_CMockStopIgnore(void)
{
    if (Mock.i2c_master_write_to_device_IgnoreBool)
        Mock.i2c_master_write_to_device_CallInstance = CMock_Guts_MemNext(
            Mock.i2c_master_write_to_device_CallInstance);
    Mock.i2c_master_write_to_device_IgnoreBool = (char)0;
}

void i2c_master_write_to_device_CMockExpectAndReturn(
    UNITY_LINE_TYPE cmock_line, i2c_port_t i2c_num, uint8_t device_address,
    const uint8_t *write_buffer, size_t write_size, TickType_t ticks_to_wait,
    esp_err_t cmock_to_return)
{
    CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(
        sizeof(CMOCK_i2c_master_write_to_device_CALL_INSTANCE));
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            cmock_guts_index);
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
    memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
    Mock.i2c_master_write_to_device_CallInstance =
        CMock_Guts_MemChain(Mock.i2c_master_write_to_device_CallInstance,
                            cmock_guts_index);
    Mock.i2c_master_write_to_device_IgnoreBool = (char)0;
    cmock_call_instance->LineNumber = cmock_line;
    CMockExpectParameters_i2c_master_write_to_device(cmock_call_instance, i2c_num,
                                                     device_address, write_buffer,
                                                     write_size, ticks_to_wait);
    memcpy((void *)(&cmock_call_instance->ReturnVal), (void *)(&cmock_to_return),
           sizeof(esp_err_t[sizeof(cmock_to_return) == sizeof(esp_err_t) ? 1 : -1])); /* add esp_err_t to :treat_as_array if this causes an error */
}

void i2c_master_write_to_device_AddCallback(CMOCK_i2c_master_write_to_device_CALLBACK Callback)
{
    Mock.i2c_master_write_to_device_IgnoreBool = (char)0;
    Mock.i2c_master_write_to_device_CallbackBool = (char)1;
    Mock.i2c_master_write_to_device_CallbackFunctionPointer = Callback;
}

void i2c_master_write_to_device_Stub(CMOCK_i2c_master_write_to_device_CALLBACK Callback)
{
    Mock.i2c_master_write_to_device_IgnoreBool = (char)0;
    Mock.i2c_master_write_to_device_CallbackBool = (char)0;
    Mock.i2c_master_write_to_device_CallbackFunctionPointer = Callback;
}

void i2c_master_write_to_device_CMockIgnoreArg_i2c_num(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_write_to_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_i2c_num = 1;
}

void i2c_master_write_to_device_CMockIgnoreArg_device_address(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_write_to_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_device_address = 1;
}

void i2c_master_write_to_device_CMockIgnoreArg_write_buffer(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_write_to_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_write_buffer = 1;
}

void i2c_master_write_to_device_CMockIgnoreArg_write_size(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_write_to_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_write_size = 1;
}

void i2c_master_write_to_device_CMockIgnoreArg_ticks_to_wait(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_write_to_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_write_to_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_write_to_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_ticks_to_wait = 1;
}

esp_err_t i2c_master_read_from_device(i2c_port_t port, uint8_t address,
                                      uint8_t *read_buffer, size_t read_size,
                                      TickType_t ticks_to_wait)
{
    UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance;
    UNITY_SET_DETAIL(CMockString_i2c_master_read_from_device);
    cmock_call_instance = (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)
        CMock_Guts_GetAddressFor(Mock.i2c_master_read_from_device_CallInstance);
    Mock.i2c_master_read_from_device_CallInstance = CMock_Guts_MemNext(
        Mock.i2c_master_read_from_device_CallInstance);
    if (Mock.i2c_master_read_from_device_IgnoreBool) {
        UNITY_CLR_DETAILS();
        if (cmock_call_instance == NULL)
            return Mock.i2c_master_read_from_device_FinalReturn;
        memcpy((void *)(&Mock.i2c_master_read_from_device_FinalReturn),
               (void *)(&cmock_call_instance->ReturnVal),
               sizeof(esp_err_t[sizeof(cmock_call_instance->ReturnVal) == sizeof(esp_err_t) ? 1 : -1])); /* add esp_err_t to :treat_as_array if this causes an error */
        return cmock_call_instance->ReturnVal;
    }
    if (!Mock.i2c_master_read_from_device_CallbackBool &&
        Mock.i2c_master_read_from_device_CallbackFunctionPointer != NULL) {
        esp_err_t cmock_cb_ret = Mock.i2c_master_read_from_device_CallbackFunctionPointer(
            port, address, read_buffer, read_size, ticks_to_wait,
            Mock.i2c_master_read_from_device_CallbackCalls++);
        UNITY_CLR_DETAILS();
        return cmock_cb_ret;
    }
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringCalledMore);
    cmock_line = cmock_call_instance->LineNumber;
    if (!cmock_call_instance->IgnoreArg_port) {
        UNITY_SET_DETAILS(CMockString_i2c_master_read_from_device, CMockString_port);
        UNITY_TEST_ASSERT_EQUAL_MEMORY((void *)(&cmock_call_instance->Expected_port),
                                       (void *)(&port), sizeof(i2c_port_t),
                                       cmock_line, CMockStringMismatch);
    }
    if (!cmock_call_instance->IgnoreArg_address) {
        UNITY_SET_DETAILS(CMockString_i2c_master_read_from_device, CMockString_address);
        UNITY_TEST_ASSERT_EQUAL_HEX8(cmock_call_instance->Expected_address,
                                     address, cmock_line, CMockStringMismatch);
    }
    if (!cmock_call_instance->IgnoreArg_read_buffer) {
        UNITY_SET_DETAILS(CMockString_i2c_master_read_from_device,
                          CMockString_read_buffer);
        if (cmock_call_instance->Expected_read_buffer == NULL) {
            UNITY_TEST_ASSERT_NULL(read_buffer, cmock_line, CMockStringExpNULL);
        } else {
            UNITY_TEST_ASSERT_EQUAL_HEX8_ARRAY(cmock_call_instance->Expected_read_buffer,
                                               read_buffer, 1, cmock_line,
                                               CMockStringMismatch);
        }
    }
    if (!cmock_call_instance->IgnoreArg_read_size) {
        UNITY_SET_DETAILS(CMockString_i2c_master_read_from_device, CMockString_read_size);
        UNITY_TEST_ASSERT_EQUAL_MEMORY((void *)(&cmock_call_instance->Expected_read_size),
                                       (void *)(&read_size), sizeof(size_t),
                                       cmock_line, CMockStringMismatch);
    }
    if (!cmock_call_instance->IgnoreArg_ticks_to_wait) {
        UNITY_SET_DETAILS(CMockString_i2c_master_read_from_device,
                          CMockString_ticks_to_wait);
        UNITY_TEST_ASSERT_EQUAL_MEMORY((void *)(&cmock_call_instance->Expected_ticks_to_wait),
                                       (void *)(&ticks_to_wait), sizeof(TickType_t),
                                       cmock_line, CMockStringMismatch);
    }
    if (Mock.i2c_master_read_from_device_CallbackFunctionPointer != NULL) {
        cmock_call_instance->ReturnVal = Mock.i2c_master_read_from_device_CallbackFunctionPointer(
            port, address, read_buffer, read_size, ticks_to_wait,
            Mock.i2c_master_read_from_device_CallbackCalls++);
    }
    UNITY_CLR_DETAILS();
    return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_i2c_master_read_from_device(
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance,
    i2c_port_t port, uint8_t address, uint8_t *read_buffer, size_t read_size,
    TickType_t ticks_to_wait);
void CMockExpectParameters_i2c_master_read_from_device(
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance,
    i2c_port_t port, uint8_t address, uint8_t *read_buffer, size_t read_size,
    TickType_t ticks_to_wait)
{
    memcpy((void *)(&cmock_call_instance->Expected_port), (void *)(&port),
           sizeof(i2c_port_t[sizeof(port) == sizeof(i2c_port_t) ? 1 : -1])); /* add i2c_port_t to :treat_as_array if this causes an error */
    cmock_call_instance->IgnoreArg_port = 0;
    cmock_call_instance->Expected_address = address;
    cmock_call_instance->IgnoreArg_address = 0;
    cmock_call_instance->Expected_read_buffer = read_buffer;
    cmock_call_instance->IgnoreArg_read_buffer = 0;
    memcpy((void *)(&cmock_call_instance->Expected_read_size), (void *)(&read_size),
           sizeof(size_t[sizeof(read_size) == sizeof(size_t) ? 1 : -1])); /* add size_t to :treat_as_array if this causes an error */
    cmock_call_instance->IgnoreArg_read_size = 0;
    memcpy((void *)(&cmock_call_instance->Expected_ticks_to_wait),
           (void *)(&ticks_to_wait),
           sizeof(TickType_t[sizeof(ticks_to_wait) == sizeof(TickType_t) ? 1 : -1])); /* add TickType_t to :treat_as_array if this causes an error */
    cmock_call_instance->IgnoreArg_ticks_to_wait = 0;
}

void i2c_master_read_from_device_CMockIgnoreAndReturn(UNITY_LINE_TYPE cmock_line,
                                                      esp_err_t cmock_to_return)
{
    CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(
        sizeof(CMOCK_i2c_master_read_from_device_CALL_INSTANCE));
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            cmock_guts_index);
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
    memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
    Mock.i2c_master_read_from_device_CallInstance =
        CMock_Guts_MemChain(Mock.i2c_master_read_from_device_CallInstance,
                            cmock_guts_index);
    Mock.i2c_master_read_from_device_IgnoreBool = (char)0;
    cmock_call_instance->LineNumber = cmock_line;
    cmock_call_instance->ReturnVal = cmock_to_return;
    Mock.i2c_master_read_from_device_IgnoreBool = (char)1;
}

void i2c_master_read_from_device_CMockStopIgnore(void)
{
    if (Mock.i2c_master_read_from_device_IgnoreBool)
        Mock.i2c_master_read_from_device_CallInstance = CMock_Guts_MemNext(
            Mock.i2c_master_read_from_device_CallInstance);
    Mock.i2c_master_read_from_device_IgnoreBool = (char)0;
}

void i2c_master_read_from_device_CMockExpectAndReturn(
    UNITY_LINE_TYPE cmock_line, i2c_port_t port, uint8_t address, uint8_t *read_buffer,
    size_t read_size, TickType_t ticks_to_wait, esp_err_t cmock_to_return)
{
    CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(
        sizeof(CMOCK_i2c_master_read_from_device_CALL_INSTANCE));
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            cmock_guts_index);
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringOutOfMemory);
    memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
    Mock.i2c_master_read_from_device_CallInstance =
        CMock_Guts_MemChain(Mock.i2c_master_read_from_device_CallInstance,
                            cmock_guts_index);
    Mock.i2c_master_read_from_device_IgnoreBool = (char)0;
    cmock_call_instance->LineNumber = cmock_line;
    CMockExpectParameters_i2c_master_read_from_device(cmock_call_instance, port,
                                                      address, read_buffer,
                                                      read_size, ticks_to_wait);
    memcpy((void *)(&cmock_call_instance->ReturnVal), (void *)(&cmock_to_return),
           sizeof(esp_err_t[sizeof(cmock_to_return) == sizeof(esp_err_t) ? 1 : -1])); /* add esp_err_t to :treat_as_array if this causes an error */
}

void i2c_master_read_from_device_AddCallback(CMOCK_i2c_master_read_from_device_CALLBACK Callback)
{
    Mock.i2c_master_read_from_device_IgnoreBool = (char)0;
    Mock.i2c_master_read_from_device_CallbackBool = (char)1;
    Mock.i2c_master_read_from_device_CallbackFunctionPointer = Callback;
}

void i2c_master_read_from_device_Stub(CMOCK_i2c_master_read_from_device_CALLBACK Callback)
{
    Mock.i2c_master_read_from_device_IgnoreBool = (char)0;
    Mock.i2c_master_read_from_device_CallbackBool = (char)0;
    Mock.i2c_master_read_from_device_CallbackFunctionPointer = Callback;
}

void i2c_master_read_from_device_CMockIgnoreArg_port(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_read_from_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_port = 1;
}

void i2c_master_read_from_device_CMockIgnoreArg_address(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_read_from_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_address = 1;
}

void i2c_master_read_from_device_CMockIgnoreArg_read_buffer(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_read_from_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_read_buffer = 1;
}

void i2c_master_read_from_device_CMockIgnoreArg_read_size(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_read_from_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_read_size = 1;
}

void i2c_master_read_from_device_CMockIgnoreArg_ticks_to_wait(UNITY_LINE_TYPE cmock_line)
{
    CMOCK_i2c_master_read_from_device_CALL_INSTANCE *cmock_call_instance =
        (CMOCK_i2c_master_read_from_device_CALL_INSTANCE *)CMock_Guts_GetAddressFor(
            CMock_Guts_MemEndOfChain(Mock.i2c_master_read_from_device_CallInstance));
    UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, CMockStringIgnPreExp);
    cmock_call_instance->IgnoreArg_ticks_to_wait = 1;
}