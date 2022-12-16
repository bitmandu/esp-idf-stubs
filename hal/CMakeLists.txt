# CMakeLists.txt

idf_component_register(INCLUDE_DIRS $ENV{IDF_PATH}/components/hal/include
                       REQUIRES soc)
