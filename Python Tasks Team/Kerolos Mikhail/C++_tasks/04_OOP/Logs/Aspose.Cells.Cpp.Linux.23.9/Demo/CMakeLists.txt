cmake_minimum_required (VERSION 3.0)
project(demo)

message(Src_Dir:${PROJECT_SOURCE_DIR})

set(Demo_INCLUDE_DIRS_SRC1    ${PROJECT_SOURCE_DIR}/../Include)
set(Demo_INCLUDE_DIRS_SRC2    ${PROJECT_SOURCE_DIR}/../Include/Publish)
set(Demo_INCLUDE_DIRS_ICU     ${PROJECT_SOURCE_DIR}/../Include/icu67/include)
set(Demo_INCLUDE_DIRS_BOOST   ${PROJECT_SOURCE_DIR}/../Include/boost)
set(Demo_INCLUDE_DIRS_LIBGDIP ${PROJECT_SOURCE_DIR}/../Include/Aspose.Cells.Systems/Drawing/libgdiplus/include)
set(GLIB_INCLUDE_1            /usr/include/glib-2.0)
set(GLIB_INCLUDE_2            /usr/lib/x86_64-linux-gnu/glib-2.0/include)
#set(GLIB_INCLUDE_3            /usr/include/glib-2.0/glib)

include_directories(
                     ${Demo_INCLUDE_DIRS_SRC1}
                     ${Demo_INCLUDE_DIRS_SRC2}
                     ${Demo_INCLUDE_DIRS_ICU} 
                     ${Demo_INCLUDE_DIRS_BOOST}
		     ${Demo_INCLUDE_DIRS_LIBGDIP}  
                     ${GLIB_INCLUDE_1}
                     ${GLIB_INCLUDE_2}
                     #${GLIB_INCLUDE_3}
                   )


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-permissive -fpermissive -g")
#shudown warnnings
add_definitions(-w)

add_executable(${PROJECT_NAME} main.cpp)

set(Demo_ASPOSE_LIBS ${PROJECT_SOURCE_DIR}/../lib64/libAsposeCells.so)
set(Demo_ICU_LIBS    ${PROJECT_SOURCE_DIR}/../lib64/libicui18n.so)
set(Demo_PERF_LIBS   ${PROJECT_SOURCE_DIR}/../lib64/libtcmalloc_minimal.so)

target_link_libraries( 
                       ${PROJECT_NAME}
		       ${Demo_ASPOSE_LIBS}
		       ${Demo_ICU_LIBS}
		       ${Demo_PERF_LIBS}
                     )


