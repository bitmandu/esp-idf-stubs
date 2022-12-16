# CMakeLists.txt

idf_component_register(
  INCLUDE_DIRS $ENV{IDF_PATH}/components/soc/include
               $ENV{IDF_PATH}/components/soc/${TEST_TARGET}/include)
