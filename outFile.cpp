#include "outFile.h"
#include <iostream>
#include <fstream>
using std::fstream, std::cout, std::cin, std::getline, std::string, std::ios;
template <typename T>
T append(string fileName, T text){
    fstream file;
    file.open(fileName, ios::app);{
        if(file.is_open()){
            file << text << "\n";
        }
        else{
            std::cout << "File doesn't exist. File named " << fileName << " has been created.\n";
        }
    }
    file.close();
}