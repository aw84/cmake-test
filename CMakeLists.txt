cmake_minimum_required(VERSION 3.10)

# set the project name
project(cmake-test VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(USE_MYLIB "Use tutorial provided math implementation" ON)

configure_file(TutorialConfig.h.in TutorialConfig.h)
# add the executable

if(USE_MYLIB)
    add_subdirectory(MyLib)
    list(APPEND EXTRA_LIBS MyLib)
endif()
add_executable(cmake-test tutorial.cxx)

target_link_libraries(cmake-test PUBLIC ${EXTRA_LIBS})

target_include_directories("cmake-test" PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )
