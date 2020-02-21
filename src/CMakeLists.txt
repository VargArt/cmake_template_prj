set(SOURCES
simple_library.h
simple_library.cpp
)

add_library(simple_project_lib ${SOURCES})

target_include_directories(simple_project_lib PUBLIC ${SRC_ROOT_DIR})

source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

# В solution эта библиотека лежит в simple_project
set_property(TARGET simple_project_lib PROPERTY FOLDER "simple_project")

add_subdirectory(tests)