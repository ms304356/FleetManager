cmake_minimum_required(VERSION 3.21)
project(FleetManager)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp Driver.h Person.h Pesel.h Car.h Taxi.h Van.h Limo.h SDTaxi.h Interface.h Interface.cpp)