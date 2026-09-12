cmake_minimum_required(VERSION 3.20)

project(PsRecall
    VERSION 0.1.0
    DESCRIPTION "Buscador de procesos para PowerShell en C++20"
    LANGUAGES CXX
)

# Establecer los directorios de salida globalmente para ejecutables y librerías
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

# Configurar C++20 de forma estricta y obligatoria
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Opciones de compilación recomendadas para advertencias estrictas
if(MSVC)
    add_compile_options(/W4 /wx /permissive-)
else()
    add_compile_options(-Wall -Wextra -Wpedantic -Werror)
endif()

# Definir el ejecutable principal
add_executable(PsRecall
    core/main.cpp
)

# Configurar la carpeta include/ para evitar rutas relativas con ../ (#include "...")
target_include_directories(PsRecall
    PRIVATE
        include
)

# Enlace automático con librerías gestionadas por vcpkg (si se usa vcpkg.json)
# Nota: Asegúrate de pasar el toolchain al configurar CMake por primera vez:
# cmake -B build -S . -DCMAKE_TOOLCHAIN_FILE=vcpkg/scripts/buildsystems/vcpkg.cmake
