cmake_minimum_required(VERSION 3.16)

project(DatabaseApp LANGUAGES CXX)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Укажите пути для Qt
find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

# Включите автоматическую обработку MOC, UIC и RCC
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

# Укажите путь к папке с .ui файлами
set(CMAKE_AUTOUIC_SEARCH_PATHS ui)

# Добавьте исходники
set(SOURCES
    src/main.cpp
    src/MainWindow.cpp
    src/TextDatabase.cpp
)

set(HEADERS
    src/MainWindow.h
    src/TextDatabase.h
)

set(UI_FILES
    ui/MainWindow.ui
)

# Создайте исполняемый файл
add_executable(DatabaseApp ${SOURCES} ${HEADERS} ${UI_FILES})

# Линковка с Qt6
target_link_libraries(DatabaseApp PRIVATE Qt6::Core Qt6::Widgets)

# Укажите папку для сборки
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
