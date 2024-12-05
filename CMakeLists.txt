cmake_minimum_required(VERSION 3.28)
project(personne)

set(CMAKE_CXX_STANDARD 17)

add_executable(personne Personne/main.cpp
        Personne/Prof.cpp
        Personne/Etudiant.cpp
        Personne/Personne.h
        Personne/Personne.cpp)
