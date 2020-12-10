#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int factorial(int number);

int main(){

    int number = 0, res = 0;
    
    std::cout << "Ingrese un numero: ";
    std::cin >> number;

    res = factorial(number);

    printf("%i! = %i\n", number, res);

    return 0;
}

int factorial(int number){
    if(number == 1)
        return 1;
    else
        return number * factorial(number - 1);
}
