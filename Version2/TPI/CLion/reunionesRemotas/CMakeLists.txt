cmake_minimum_required(VERSION 3.5)
project(reunionesRemotas)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-pthread")

add_library(gtest lib/gtest-all.cc)

add_executable(reunionesRemotas
        main.cpp
        src/auxiliares.cpp
        src/auxiliares.h
        src/definiciones.h
        src/solucion.h
        src/solucion.cpp
        tests/acelerar.cpp
        tests/esReunionValida.cpp
        tests/esSenial.cpp
        tests/filtradoMediana.cpp
        tests/hablantesSuperpuestos.cpp
        tests/ordenar.cpp
        tests/reconstruir.cpp
        tests/ralentizar.cpp
        tests/reconstruir.cpp
        tests/seEnojo.cpp
        tests/silencios.cpp
        tests/tonosDeVozElevados.cpp
        )


set_target_properties(reunionesRemotas PROPERTIES COMPILE_FLAGS "-g --coverage")
set_target_properties(reunionesRemotas PROPERTIES LINK_FLAGS "-g --coverage")

target_link_libraries(reunionesRemotas gtest)


