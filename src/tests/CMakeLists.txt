set(SOURCES
    tests.cpp
)

add_executable(simple_test ${SOURCES})

target_link_libraries(simple_test PUBLIC simple_project_lib)
target_link_libraries(simple_test PUBLIC gtest_main)

set_property(TARGET simple_test PROPERTY FOLDER "tests/simple_test")