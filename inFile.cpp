#include "inFile.h"
#include <iostream>
#include <fstream>
using std::ifstream, std::ios, std::string, std::getline, std::cin;

static void read(string fileName){
    ifstream file;
    string line;
    file.open(fileName, ios::in);
    if(file.is_open()){
        while(getline(file, line)){
            std::cout << line << "\n";
        }
    }
    else{
        std::cout << fileName << " does not exist.";
    }
    file.close();
}

static int lineCount(string fileName){
    ifstream file;
    string line;
    int lineCount = 0;
    file.open(fileName, ios::in);
    if(file.is_open()){
        while(getline(file, line)){
            lineCount++;
        }
    }
    else{
        std::cout << fileName << " does not exist.";
    }
    return lineCount;
    file.close();
}