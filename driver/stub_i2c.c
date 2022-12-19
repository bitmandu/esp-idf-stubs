/**
 * @file stub_i2c.c
 *
 * Test stub for driver/i2c.h interface.
 */

#include "driver/stub_i2c.h"

#include <stdbool.h>
#include <string.h>

static struct {
    i2c_config_t config;
    bool is_installed;
    i2c_mode_t mode;
} i2c_state[I2C_NUM_MAX];

esp_err_t i2c_param_config(i2c_port_t port, const i2c_config_t *config)
{
    i2c_state[port].config = *config;
    i2c_state[port].is_installed = false;
    i2c_state[port].mode = I2C_MODE_MAX;
    return ESP_OK;
}

esp_err_t i2c_driver_install(i2c_port_t port, i2c_mode_t mode, size_t slv_rx_buf_len,
                             size_t slv_tx_buf_len, int intr_alloc_flags)
{
    i2c_state[port].is_installed = true;
    i2c_state[port].mode = mode;
    return ESP_OK;
}

/*
esp_err_t i2c_master_write_to_device(i2c_port_t port, uint8_t address,
                                     const uint8_t *write_buffer,
                                     size_t write_size, TickType_t ticks_to_wait)
{
    return ESP_FAIL;
}

esp_err_t i2c_master_read_from_device(i2c_port_t port, uint8_t address,
                                      uint8_t *read_buffer, size_t read_size,
                                      TickType_t ticks_to_wait)
{
    return ESP_FAIL;
}
*/

i2c_mode_t stub_i2c_spy_mode(i2c_port_t port)
{
    return i2c_state[port].mode;
}

void stub_i2c_reset(void)
{
    memset(i2c_state, 0, sizeof(i2c_state));
}
