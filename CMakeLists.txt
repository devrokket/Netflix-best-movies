cmake_minimum_required(VERSION 3.23)
project(kaggleOop)

set(CMAKE_CXX_STANDARD 14)

add_executable(kaggleOop main.cpp Netflix.cpp Netflix.h Movie.cpp Movie.h RomanceMovie.cpp RomanceMovie.h ComedyMovie.cpp ComedyMovie.h ParseMovie.cpp ParseMovie.h UI.cpp UI.h)
