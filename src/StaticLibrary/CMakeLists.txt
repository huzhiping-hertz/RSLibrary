set(utility_library_name "static")
file(GLOB UTILITY_SRCS "*.cpp")
add_library(${utility_library_name} STATIC ${UTILITY_SRCS})

