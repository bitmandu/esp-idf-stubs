# CMakeLists.txt

idf_component_register(
  SRCS stub_gpio.c stub_gptimer.c stub_i2c.c mocks/driver/mock_i2c.c
  INCLUDE_DIRS $ENV{IDF_PATH}/components/driver/include include mocks
  REQUIRES esp_hw_support hal cmock)
