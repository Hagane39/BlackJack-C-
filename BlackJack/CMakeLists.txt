cmake_minimum_required(VERSION 3.16)

project(BlackJack)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(Class)
include_directories(Class/Cpp_Files)
include_directories(Class/Header_Files)

add_executable(BlackJack
        Class/Cpp_Files/Card.cpp
        Class/Cpp_Files/Deck.cpp
        Class/Cpp_Files/Game.cpp
        Class/Cpp_Files/GenericPlayer.cpp
        Class/Cpp_Files/Hand.cpp
        Class/Cpp_Files/House.cpp
        Class/Cpp_Files/Player.cpp
        Class/Header_Files/Card.h
        Class/Header_Files/Deck.h
        Class/Header_Files/Game.h
        Class/Header_Files/GenericPlayer.h
        Class/Header_Files/Hand.h
        Class/Header_Files/House.h
        Class/Header_Files/Player.h
        Class/Cpp_Files/Overload_Card.cpp
        Class/Cpp_Files/Overload_Player.cpp
        Class/Header_Files/OC.h
        Class/Header_Files/OP.h
        include.h
        main.cpp )

