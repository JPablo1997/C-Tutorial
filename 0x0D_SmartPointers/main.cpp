#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>
#include <iterator>
#include <stdio.h>

int main(){
    int amtToStore;
    std::cout << "Cantidad de numeros a ingresar: ";
    std::cin >> amtToStore;
    int* pNums;
    pNums = (int*) malloc(amtToStore * sizeof(int));
    
    if(pNums != NULL){
        for(int i = 0; i < amtToStore; i++){
            std::cout << "Ingrese el numero " << (i + 1) << ": ";
            std::cin >> pNums[i];
        }
    }

    std::cout << "Ingreso estos valores: \n";

    for(int i = 0; i < amtToStore; i++){
        std::cout << "Numero " << (i + 1) << ": " << pNums[i] << " on Memory Address: " << &pNums[i] << std::endl;
    }

    delete pNums;

    return 0;
}
