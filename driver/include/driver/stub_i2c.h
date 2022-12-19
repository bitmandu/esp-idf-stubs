/**
 * @file stub_i2c.h
 *
 * Test stub for driver/i2c.h interface.
 */

#pragma once

#include "driver/i2c.h"

/** Spy I2C communication mode. */
i2c_mode_t stub_i2c_spy_mode(i2c_port_t port);

/** Clear saved I2C state. */
void stub_i2c_reset(void);
