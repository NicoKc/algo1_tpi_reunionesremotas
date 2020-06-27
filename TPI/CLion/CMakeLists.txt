cmake_minimum_required(VERSION 3.16)
project(CLion)

set(CMAKE_CXX_STANDARD 14)

include_directories(reunionesRemotas/lib)
include_directories(reunionesRemotas/src)

add_executable(CLion
        reunionesRemotas/lib/gtest-all.cc
        reunionesRemotas/lib/gtest.h
        reunionesRemotas/src/auxiliares.cpp
        reunionesRemotas/src/auxiliares.h
        reunionesRemotas/src/definiciones.h
        reunionesRemotas/src/solucion.cpp
        reunionesRemotas/src/solucion.h
        reunionesRemotas/tests/acelerar.cpp
        reunionesRemotas/tests/esReunionValida.cpp
        reunionesRemotas/tests/esSenial.cpp
        reunionesRemotas/tests/filtradoMediana.cpp
        reunionesRemotas/tests/hablantesSuperpuestos.cpp
        reunionesRemotas/tests/ordenar.cpp
        reunionesRemotas/tests/ralentizar.cpp
        reunionesRemotas/tests/reconstruir.cpp
        reunionesRemotas/tests/seEnojo.cpp
        reunionesRemotas/tests/silencios.cpp
        reunionesRemotas/tests/tonosDeVozElevados.cpp
        reunionesRemotas/CMakeLists.txt
        reunionesRemotas/main.cpp)
