#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

double addNumbers(double num1, double num2);

int main(){

    double num1, num2;
    std::cout << "Ingrese el numero 1: " << "\n";
    std::cin >> num1;
    
    std::cout << "Ingrese el numero 2: " << "\n";
    std::cin >> num2;

    printf("%.1f + %.1f = %.1f\n", num1, num2, addNumbers(num1, num2));

}


double addNumbers(double num1, double num2){
    return num1 + num2;
}


