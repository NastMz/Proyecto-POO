//
// Created by ksmar on 29/07/2022.
//

#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include "FileController.h"

using namespace std;

void createFile(string fileName) {
    ofstream file;
    file.open(fileName, ios::binary | ios::out);
    if (file.is_open()) {
        file.close();
    } else {
        cout << "Unable to open file " << fileName << endl;
    }
}

vector<string> readFile(string fileName) {
    vector<string> dataList;
    ifstream file;
    file.open(fileName, ios::binary | ios::in);
    if (!file.is_open()) {
        cout << "Unable to open file " << fileName << endl;
    } else {
        string line;
        while (getline(file, line)) {
            dataList.push_back(line);
        }
    }
    return dataList;
}

void addItemToFile(string fileName, string payload) {
    ofstream file;
    file.open(fileName, ios::binary | ios::app);
    if (file.is_open()) {
        file << payload << endl;
        file.close();
    } else {
        cout << "Unable to open file " << fileName << endl;
    }
}
