cmake_minimum_required (VERSION 3.12)


project ("RSLibrary"  VERSION 1.2.3)

set(CMake_CXX_STANDARD 17)
set(CMake_CXX_STANDARD_REQUARED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

IF (WIN32)
    message("Compiling Under Windows Platform")
   
ELSEIF (UNIX)
    message("Compiling Under UNIX Platform")
    #使用vcpkg安装第三方库

ENDIF ()

#执行文件输出路径
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
#库文件输出路径
SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#项目头文件
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src/DynamicLibrary)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src/StaticLibrary)
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/src/Tester)


#项目源码
add_subdirectory(src/DynamicLibrary)
add_subdirectory(src/StaticLibrary)
add_subdirectory(src/Tester)

