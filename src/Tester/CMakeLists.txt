set(APP_NAME "Tester")
file(GLOB cpp_files "*.cpp")
add_executable(${APP_NAME} ${cpp_files} )
target_link_libraries(${APP_NAME}   dynamic)
