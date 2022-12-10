/**
 * @file stub_gpio.c
 *
 * Test stub for driver/gpio.c.
 */

#include "stub_gpio.h"

static gpio_config_t pin_config[64];

esp_err_t gpio_config(const gpio_config_t *pGPIOConfig)
{
    for (gpio_num_t i = 0; i < 64; ++i) {
        if (pin_is_set(pGPIOConfig->pin_bit_mask, i)) {
            pin_config[i] = *pGPIOConfig;
        }
    }

    return ESP_OK;
}

gpio_config_t *gpio_config_spy(gpio_num_t pin)
{
    return &pin_config[pin];
}

bool pin_is_set(uint64_t pin_bit_mask, gpio_num_t pin)
{
    return pin_bit_mask & (1ULL << pin);
}
