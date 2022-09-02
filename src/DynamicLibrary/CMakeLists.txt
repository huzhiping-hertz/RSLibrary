if(MSVC)
    add_compile_definitions(HERTZ_DLL_EXPORTS)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/version.rc.in ${CMAKE_CURRENT_BINARY_DIR}/version.rc)
    set(ves_files ${CMAKE_CURRENT_BINARY_DIR}/version.rc)
endif()

set(library_name "dynamic")

file(GLOB cpp_files "*.cpp")

add_library(${library_name} SHARED  ${cpp_files} ${ves_files} )

IF (UNIX)
    #形如lib*.so.x.y.z是有一套命名规则（*表示你给so的名字），x表示major version ，y表示minor version  z表示release version
    set_target_properties(${library_name}  PROPERTIES VERSION 1.2.3 SOVERSION 1)
ENDIF ()