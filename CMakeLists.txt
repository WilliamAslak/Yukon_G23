cmake_minimum_required(VERSION 3.25)
project(Yukon_G23)

set(CMAKE_CXX_STANDARD 17)

add_executable(Yukon_G23 src/main.c src/logic/printer.c src/logic/printer.h src/models/Card.c src/models/Card.h)
