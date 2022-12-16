# CMakeLists.txt

idf_component_register(
  SRCS stub_gpio.c stub_gptimer.c
  INCLUDE_DIRS include $ENV{IDF_PATH}/components/driver/include
  REQUIRES esp_hw_support hal)
