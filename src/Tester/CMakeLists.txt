set(APP_NAME "Tester")

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/version.rc.in ${CMAKE_CURRENT_BINARY_DIR}/version.rc)
set(ves_files "${CMAKE_CURRENT_BINARY_DIR}/version.rc")

file(GLOB cpp_files "*.cpp")

add_executable(${APP_NAME} ${cpp_files} ${ves_files})
target_link_libraries(${APP_NAME}   dynamic )
