#include "sorting.h"

// sorting class
void Sorting::bubble(int arr[], int size, char order){
    int temp = 0;
    int n = 1;
    // for every num on the list
    for(int i = 0; i < size; i++){
        // for every num on the list
        for(int j = 0; j < size; j++){
            //ascending order
            switch(order){
                case 'a': //if left > right, switch
                if(arr[i] > arr[i+n]){
                    temp = arr[i];
                    arr[i] = arr[i+n];
                    arr[i+n] = temp;
                }
            // descending order
                case 'd': //if left < right, switch
                if(arr[i] > arr[i+n]){
                    temp = arr[i];
                    arr[i] = arr[i+n];
                    arr[i+n] = temp;
                }
            


        }
    }
}
}
void Sorting::selection(int arr[], int size, char order){

}