# задаем набор исходников
set(SOURCES
    tests.cpp
)

# создаем исполняемый файл
add_executable(simple_test ${SOURCES})

# подключаем библиотеки:
# 1. Тестируемая библиотека
# 2. gest
target_link_libraries(simple_test PUBLIC simple_project_lib)
target_link_libraries(simple_test PUBLIC gtest_main)

# В solution эта библиотека лежит в tests/simple_test
set_property(TARGET simple_test PROPERTY FOLDER "tests/simple_test")