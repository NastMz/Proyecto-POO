//
// Created by ksmar on 30/07/2022.
//

#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

vector<string> getWords(string text){
    vector<string> words{};
    char space_char = ' ';

    stringstream sstream(text);
    string word;
    while (getline(sstream, word, space_char)){
        words.push_back(word);
    }
    return words;
}