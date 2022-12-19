

esp_err_t i2c_master_write_to_device(i2c_port_t i2c_num, uint8_t device_address,
                                     const uint8_t *write_buffer,
                                     size_t write_size, TickType_t ticks_to_wait);

esp_err_t i2c_master_read_from_device(i2c_port_t port, uint8_t address,
                                      uint8_t *read_buffer, size_t read_size,
                                      TickType_t ticks_to_wait);
