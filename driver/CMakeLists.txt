# CMakeLists.txt

idf_component_register(
  SRCS gpio/stub_gpio.c
  INCLUDE_DIRS include
  REQUIRES esp_hw_support hal)
