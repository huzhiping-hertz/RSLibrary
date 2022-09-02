add_compile_definitions(HERTZ_DLL_EXPORTS)
set(library_name "dynamic")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/version.rc.in ${CMAKE_CURRENT_BINARY_DIR}/version.rc)
set(ves_files ${CMAKE_CURRENT_BINARY_DIR}/version.rc)

file(GLOB cpp_files "*.cpp")

add_library(${library_name} SHARED  ${cpp_files} ${ves_files} )
