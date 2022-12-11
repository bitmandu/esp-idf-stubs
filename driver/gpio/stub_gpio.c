/**
 * @file stub_gpio.c
 *
 * Test stub for driver/gpio.c.
 */

#include "stub_gpio.h"

/**< GPIO levels */
typedef enum { UNKNOWN = -1, LOW, HIGH } level_t;

static struct {
    gpio_config_t config;
    level_t level;
} gpio_state[GPIO_NUM_MAX];

esp_err_t gpio_config(const gpio_config_t *pGPIOConfig)
{
    for (gpio_num_t i = 0; i < GPIO_NUM_MAX; ++i) {
        if (pin_is_set(pGPIOConfig->pin_bit_mask, i)) {
            gpio_state[i].config = *pGPIOConfig;
            gpio_state[i].level = UNKNOWN;
        }
    }

    return ESP_OK;
}

esp_err_t gpio_set_level(gpio_num_t gpio_num, uint32_t level)
{
    gpio_state[gpio_num].level = level ? HIGH : LOW;
    return ESP_OK;
}

int gpio_get_level(gpio_num_t gpio_num)
{
    return gpio_state[gpio_num].level;
}

gpio_config_t *gpio_config_spy(gpio_num_t pin)
{
    return &gpio_state[pin].config;
}

bool pin_is_set(uint64_t pin_bit_mask, gpio_num_t pin)
{
    return pin_bit_mask & (1ULL << pin);
}
