cmake_minimum_required(VERSION 3.20)

file(GLOB_RECURSE src_list LIST_DIRECTORIES false RELATIVE "${CMAKE_CURRENT_LIST_DIR}" "*.c*")
foreach(v2 ${src_list})
    set(target_name "${v2}")
    string(REGEX REPLACE "/" "." target_name ${target_name})
    add_executable(${target_name} "${CMAKE_CURRENT_LIST_DIR}/${v2}")
endforeach()