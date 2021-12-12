add_library(MyLib mylib.cxx)

target_include_directories(MyLib
    INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
    )