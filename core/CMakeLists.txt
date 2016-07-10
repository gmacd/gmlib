file(GLOB GMLIB_CORE_SOURCES *)

add_library(gmlib_core ${GMLIB_CORE_SOURCES} debug.hpp)

get_filename_component(PARENT_DIR ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)
target_include_directories(gmlib_core PUBLIC ${PARENT_DIR}/third/include)
target_include_directories(gmlib_core PUBLIC ${PARENT_DIR})

set_property(TARGET gmlib_core PROPERTY CXX_STANDARD 14)
