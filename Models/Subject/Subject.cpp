//
// Created by ksmar on 29/07/2022.
//

#include "Subject.h"

Subject::Subject(int code, string name, float score) {
    this->code = code;
    this->name = name;
    this->score = score;
}

int Subject::getCode() {
    return code;
}

string Subject::getName() {
    return name;
}

float Subject::getScore() {
    return score;
}
