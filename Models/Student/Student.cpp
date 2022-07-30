//
// Created by ksmar on 29/07/2022.
//

#include "Student.h"

Student::Student(int code, string name) {
    this->code = code;
    this->name = name;
}

int Student::getCode() {
    return this->code;
}

string Student::getName() {
    return this->name;
}

void Student::addSubject(Subject subject) {
    this->subjects.emplace_back(subject);
}
