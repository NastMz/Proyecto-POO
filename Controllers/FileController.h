//
// Created by ksmar on 29/07/2022.
//

#ifndef PROYECTO_POO_FILECONTROLLER_H
#define PROYECTO_POO_FILECONTROLLER_H

#include <string>
#include <vector>

using namespace std;

void createFile(string fileName);

vector<string> readFile(string fileName);

void addItemToFile(string fileName, string payload);

#endif //PROYECTO_POO_FILECONTROLLER_H
