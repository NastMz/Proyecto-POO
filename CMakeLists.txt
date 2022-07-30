cmake_minimum_required(VERSION 3.23)
project(Proyecto_POO)

set(CMAKE_CXX_STANDARD 23)

add_executable(Proyecto_POO main.cpp Models/Student/Student.cpp Models/Student/Student.h Models/Subject/Subject.cpp Models/Subject/Subject.h Controllers/FileController.cpp Controllers/FileController.h Views/MainMenu.h Views/MainMenu.cpp Utils/Validate.h Utils/Validate.cpp Utils/Tools.cpp Utils/Tools.h)
