cmake_minimum_required(VERSION 3.21)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab6 main.cpp console/console.cpp console/console.h menu/menu.cpp menu/menu.h Operations/Operations.cpp Operations/Operations.h Repo/Repo.cpp Repo/Repo.h Square/Square.cpp Square/Square.h Tests/Tests.cpp Tests/Tests.h)
