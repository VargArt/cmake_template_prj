# задаем набор исходников
set(SOURCES
simple_library.h
simple_library.cpp
)

# создаем статическую библиотеку
add_library(simple_project_lib ${SOURCES})

# добавлем путь к исходникам для возожности подключения библиотеки
target_include_directories(simple_project_lib PUBLIC ${SRC_ROOT_DIR})

# группируем исходники по типу по категориям
source_group(TREE ${CMAKE_CURRENT_LIST_DIR} FILES ${SOURCES})

# В solution эта библиотека лежит в simple_project
set_property(TARGET simple_project_lib PROPERTY FOLDER "simple_project")

# включаем в сборку проекnа подпроект с тестами
add_subdirectory(tests)