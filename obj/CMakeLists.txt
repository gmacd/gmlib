file(GLOB GMLIB_OBJ_SOURCES *)

add_library(gmlib_obj ${GMLIB_OBJ_SOURCES})

get_filename_component(PARENT_DIR ${CMAKE_CURRENT_LIST_DIR} DIRECTORY)
target_include_directories(gmlib_obj PUBLIC ${PARENT_DIR}/third/include)
target_include_directories(gmlib_obj PUBLIC ${PARENT_DIR})

set_property(TARGET gmlib_obj PROPERTY CXX_STANDARD 14)
