#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void doubleArray(int* arr, int size);

int main(){

    int arr[] = {1,2,3,4};
    doubleArray(arr, 4);

    for(auto val: arr){
        std::cout << "Array: " << val << "\n";
    }

    return 0;
}


void doubleArray(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = arr[i] * 2;
    }
}
