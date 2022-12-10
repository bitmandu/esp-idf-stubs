/**
 * @file stub_gpio.h
 *
 * Test stub for driver/gpio.c.
 */

#pragma once

#include <stdbool.h>
#include <stdint.h>

#include "driver/gpio.h"

/** Spy GPIO pin configuration. */
gpio_config_t *gpio_config_spy(gpio_num_t pin);

/** Test whether a pin is set. */
bool pin_is_set(uint64_t pin_bit_mask, gpio_num_t pin);
