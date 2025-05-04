#include "sorting.h"
#include <iostream>
#include <vector>
using std::vector;
// sorting class
void Sorting::ownSort(vector<int>nums, int size, char order){
    int baseJ = 1;
    int temp = 0;
    int vectors = size/2;
    //ascending first:
    for(int i = 0; i < vectors; i++){
        vector<int> *pV = new vector<int>;
        pV->push_back(nums.front());
        pV->push_back(nums.front());
        pV->push_back(nums.front());
}

}

int main(){
    Sorting s;
    vector<int> nums = {2, 8, 5, 3, 9, 4, 1, 7};
    s.ownSort(nums, sizeof(nums)/sizeof(nums[0]), 'a');
    for(int i = 0; i < 8; i++){
    std::cout << nums[i] << " ";
    }
}