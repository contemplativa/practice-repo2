#include <iostream>
#include "sorting.h"
#include "inFile.h"
#include "outFile.h"

int main(int argc, char* argv[]){
    int size = 0;
    char type;

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
}
