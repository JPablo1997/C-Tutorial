#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(int argc, char** argv){
    int age = 43;
    int* pAge = NULL;

    // reference operator &, brinda la direccion en memoria de la variable
    pAge = &age;

    std::cout << "Address: " << pAge << std::endl;

    // direference operator *, brinda el valor almacenado en la posicion de memoria
    std::cout << "Value at that position on memory: " << *pAge << std::endl;

    int intArray[] = {1,2,3,4};
    int* pIntArray = intArray;

    std::cout << "Value of intArray " << intArray << "\n";
    
    std::cout << "1st value: " << *pIntArray <<
                " on address: " << pIntArray << "\n";

    pIntArray++;
    
    std::cout << "2nd value: " << *pIntArray <<
                " on address: " << pIntArray << "\n";

    return 0;
}


