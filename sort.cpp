#include <iostream>
#include "sorting.h"
//#include "inFile.h"
//#include "outFile.h"
#include <string>
//made by haydie

bool isDigit(std::string string);
bool convert(std::string string, int &to, bool(*func)(std::string));
int main(int argc, char* argv[]){
    int size = 0, number = 0;
    std::string stringSize;
    char type;
    bool check;

    std::cout << "made by contemplativa\n";
    do{
    std::cout << "Number Sorting Algorithms";
    std::cout << "Size of array: ";
    std::cin >> stringSize;
    check = convert(stringSize, size, isDigit);
    if(size < 0){
        std::cout << "Size must be greater than 0.\n";
    }
    }while(size < 0 || !check);
    int* pN = new int[size];

    do{
        std::cout << "Sorting Algorithm to use\n";
        std::cout << "'b' for bubble sort\n";
        std::cout << "'s' for selection sort\n";
        std::cin >> type;
        if(type != 'b' || type != 's'){
            std::cout << "Type must be 'b' or 's'. Please try again.\n";
        }
    }while(type != 'b' && type != 's');

    do{
        for(int i = 0; i < size; i++){
        std::cout << "Enter a number: ";
        std::cin >> pN[i];
        size--;
        }
    }while(size != 0);
    //test 1 [34]: pN Array
    for(int i = 0; i < size; i++){
    std::cout << pN[i] << " ";
    }
    std::cout << "\n";
    //test 1
}

bool isDigit(std::string string){
    char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool digit = false;
    int arraySize = sizeof(nums)/sizeof(nums[0]);
    //test
    //std::cout << "size: " << arraySize << "\n";
    for(int i = 0; i < string.length(); i++){
        for(int j = 0; j < arraySize; j++){
            // test2
            //std::cout << "string.at(i): " << string.at(i) << " | nums[j]: " << nums[j] << "\n"; 
            if(string.at(i) == nums[j]){
                //message
                //std::cout << "matched\n";
                digit = true;
                //std::cout << digit << "\n";
                break;
            }
            else{
                if(j == arraySize-1){
                    //message
                    //std::cout << "returned immediately.";
                    //std::cout << digit << "\n";
                    return false;
                    break;
                }
                //message
                //std::cout << "did not match.\n";
                digit = false;
                //std::cout << digit << "\n";
                continue;
            }
        }
    }
    //message
    //std::cout << "digit has been returned: " << digit << "\n";
    return digit;
}

bool convert(std::string string, int &to, bool(*func)(std::string)){
    bool check = func(string);
    if (check){
        to = std::stoi(string);
        return check;
    }
    else{
        std::cout << "It's not an integer. Please try again.\n";
        return check;
    }
}