//
// Created by ksmar on 30/07/2022.
//

#include <string>
#include <regex>
#include <fstream>

using namespace std;

bool validateName(string name) {
    const regex expression("[a-zA-Z]+");
    const regex expressionB("[a-zA-Z]+\\s[a-zA-Z]+");
    bool isValid = false;
    if (regex_match(name, expression)) {
        isValid = true;
    } else if (regex_match(name, expressionB)) {
        isValid = true;
    }
    return isValid;
}

bool validateCode(string code) {
    const regex expression("[0-9]+");
    return regex_match(code, expression);
}

bool validateOption(string optionNumber) {
    const regex expression("[0-6]");
    return regex_match(optionNumber, expression);
}

bool fileExists(string fileName) {
    ifstream file;
    file.open(fileName);
    return file.good();
}