//
// Created by ksmar on 29/07/2022.
//

#ifndef PROYECTO_POO_SUBJECT_H
#define PROYECTO_POO_SUBJECT_H

#include <string>

using namespace std;

class Subject {
private:
    int code;
    string name;
    float score;
public:
    Subject(int code, string name, float score);

    int getCode();

    string getName();

    float getScore();
};


#endif //PROYECTO_POO_SUBJECT_H
