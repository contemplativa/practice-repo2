#include <iostream>
#include "sorting.h"
#include "inFile.h"
#include "outFile.h"

int main(int argc, char* argv[]){
    int size = 0, number = 0;
    char type;
    std::cout << "contemplativa\n";
    do{
    std::cout << "Number Sorting Algorithms";
    std::cout << "Size of array: ";
    std::cin >> size;
    }while(size < 0);
    int* pN = new int[size];

    do{
        std::cout << "Sorting Algorithm to use\n";
        std::cout << "'b' for bubble sort\n";
        std::cout << "'s' for selection sort\n";
        std::cin >> type;
        if(type != 'b' || type != 's'){
            std::cout << "Type must be 'b' or 's'. Please try again.\n";
        }
    }while(type != 'b' || type != 's');

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
