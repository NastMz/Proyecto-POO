//
// Created by ksmar on 29/07/2022.
//

#ifndef PROYECTO_POO_STUDENT_H
#define PROYECTO_POO_STUDENT_H

#include <string>
#include <vector>
#include "../Subject/Subject.h"

using namespace std;

class Student {
private:
    int code;
    string name;
    vector<Subject> subjects;
public:
    Student(int code, string name);

    int getCode();

    string getName();

    void addSubject(Subject subject);
};

#endif //PROYECTO_POO_STUDENT_H
