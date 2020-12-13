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
#include <memory>

int main(){
    int amtToStore;
    std::cout << "Cantidad de numeros a ingresar: ";
    std::cin >> amtToStore;
    
    std::unique_ptr<int[]> pNums(new int[amtToStore]);

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

    return 0;
}
