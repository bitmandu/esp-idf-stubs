/**
 * @file stub_gpio.h
 *
 * Test stub for driver/gpio.h interface.
 */

#pragma once

#include "driver/gpio.h"

#include <stdbool.h>
#include <stdint.h>

/** Spy GPIO pin configuration. */
gpio_config_t *stub_gpio_spy_config(gpio_num_t pin);

/** Clear saved GPIO state. */
void stub_gpio_reset(void);

/** Test whether a GPIO pin is set. */
bool pin_is_set(uint64_t pin_bit_mask, gpio_num_t pin);
