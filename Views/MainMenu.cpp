//
// Created by ksmar on 30/07/2022.
//

#include <regex>
#include "MainMenu.h"
#include "../Utils/Validate.h"
#include "../Controllers/FileController.h"
#include "../Utils/Tools.h"

void mainMenuView() {
    cout << "================================" << endl;
    cout << "        Menu de opciones" << endl;
    cout << "================================" << endl;
    cout << endl << "1) Ingresar Estudiante" << endl;
    cout << "2) Ingresar Curso" << endl;
    cout << "3) Ingresar Calificacion" << endl;
    cout << "4) Ver Estudiantes" << endl;
    cout << "5) Ver Cursos" << endl;
    cout << "6) Ver Calificaciones" << endl;
    cout << "0) Salir" << endl;
    string optionNumber;
    while (!validateOption(optionNumber)) {
        cout << endl << "Ingrese el numero de la opcion:";
        getline(cin, optionNumber);
        if (!validateOption(optionNumber)) {
            cout << "Ingrese una opcion valida!" << endl;
        }
    }
    int option = stoi(optionNumber);
    cout << endl;
    mainMenu(option);
}

void mainMenu(int option) {
    switch (option) {
        case 0: {
            exit(0);
        }
        case 1: {
            createStudent();
            break;
        }
        case 2: {
            createSubject();
            break;
        }
        case 3: {
            addScore();
            break;
        }
        case 4: {
            viewStudents();
            break;
        }
        case 5: {
            viewSubjects();
            break;
        }
        case 6: {
            viewScores();
            break;
        }
        default: {
            cout << "Opción no valida" << endl;
            break;
        }

    }
}

void createStudent() {
    string name;
    string code;

    cout << "================================" << endl;
    cout << "      Ingresar Estudiante" << endl;
    cout << "================================" << endl;
    bool isValid = false;
    while (!isValid) {
        cout << "Nombre y Apellido del estudiante: ";
        getline(cin, name);
        isValid = validateName(name);
        if (!isValid) {
            cout << "Introduzca un nombre valido!" << endl << "Ejemplo: Juan Perez" << endl;
        }
    }
    isValid = false;
    while (!isValid) {
        cout << endl << "Codigo del estudiante: ";
        getline(cin, code);
        isValid = validateCode(code);
        if (!isValid) {
            cout
                    << "Introduzca un codigo valido!" << endl << "Ejemplo: 123456789" << endl;
        }
    }
    string fileName = "../Data/Students.txt";
    if (!fileExists(fileName)) {
        createFile(fileName);
    } else {
        string line = code + " - " + name;
        addItemToFile(fileName, line);
    }
    cout << endl << "Estudiante ingresado..." << endl;
    system("pause");
}

void createSubject() {
    string name;
    string code;

    cout << "A continuacion ingrese la informacion del curso" << endl;
    while (!validateName(name)) {
        cout << "Nombre del curso: ";
        getline(cin, name);
        if (!validateOption(name)) {
            cout << "Introduzca un nombre valido!" << endl << "Ejemplo: Matematicas" << endl;
        }
    }
    while (!validateCode(code)) {
        cout << endl << "Codigo del curso: ";
        getline(cin, code);
        if (!validateOption(code)) {
            cout
                    << "Introduzca un codigo valido!" << endl << "Ejemplo: 123456789" << endl;
        }
    }
    string fileName = "../Data/Subjects.txt";
    if (!fileExists(fileName)) {
        createFile(fileName);
    } else {
        string line = code + " - " + name;
        addItemToFile(fileName, line);
    }
    cout << endl << "Curso ingresado..." << endl;
    system("pause");
}

void addScore(){
    cout << "================================" << endl;
    cout << "      Ingresar Calificacion" << endl;
    cout << "================================" << endl;
    cout << "Module under development" << endl;
    system("pause");
};

void viewStudents(){
    cout << "================================" << endl;
    cout << "        Ver Estudiantes" << endl;
    cout << "================================" << endl << endl;
    vector<string> students = readFile("../Data/Students.txt");
    int size = students.size();
    cout << "|      Codigo      |        Estudiante        |" << endl;
    for (int i = 0 ; i < size ; i++){
        string line = students[i];
        vector<string> data = getWords(line);
        cout << "|  " + data[0] + "  |  " + data[2] + " " + data[3] + "  |";
    }
    cout << endl;
    system("pause");
};

void viewSubjects(){
    cout << "================================" << endl;
    cout << "          Ver Materias" << endl;
    cout << "================================" << endl;
    cout << "Module under development" << endl;
    system("pause");
};

void viewScores(){
    cout << "================================" << endl;
    cout << "       Ver Calificaciones" << endl;
    cout << "================================" << endl;
    cout << "Module under development" << endl;
    system("pause");
};