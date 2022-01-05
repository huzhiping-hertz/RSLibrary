add_compile_definitions(HERTZ_DLL_EXPORTS)

set(utility_library_name "dynamic")
file(GLOB UTILITY_SRCS "*.cpp")

add_library(${utility_library_name} SHARED  ${UTILITY_SRCS})
