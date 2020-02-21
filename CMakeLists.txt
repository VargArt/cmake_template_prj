# требуем минимальную версию cmake
cmake_minimum_required(VERSION 3.9.3)

# устанавливаем имя проекта
project(simple_cmake_project_with_tests CXX)

# устанавливаем директории в которые будут собираться библиотеки и исполняемые файлы
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# устанавливаем дополнительные флаги компиляции для visual studio
if(MSVC)
    add_compile_options(
        $<$<CONFIG:>:/MT>
        $<$<CONFIG:Debug>:/MTd>
        $<$<CONFIG:Release>:/MT>
    )
endif()

# устанавливаем стандарт c++
set(CMAKE_CXX_STANDARD 14)

# органезуем таргеты по директорям
set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# устанавливаем переменную в которой содержится путь к папке с исходниками
set(SRC_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR}/src)

# включаем в сборку проекта подпроект с тестами
add_subdirectory(src)
add_subdirectory(gtest)