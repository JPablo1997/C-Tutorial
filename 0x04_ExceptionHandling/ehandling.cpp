#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>


std::vector<int> range(int start, int max, int step);

int main(){

    double num1, num2;

    std::cout << "Enter number 1:" << "\n";
    std::cin >> num1;
    
    std::cout << "Enter number 2:" << "\n";
    std::cin >> num2;

    try{
        if(num2 == 0)
            throw "Divisition by zero";
        else
            printf("%.1f / %.1f = %.2f\n", num1, num2, (num1 / num2));
    } catch(const char* excp){
        std::cout << "Error: " << excp << "\n";
    }


    return 0;
}

std::vector<int> range(int start, int max, int step){
    int i = start;
    std::vector<int> range;

    while(i <= max){
        range.push_back(i);

        i += step;
    }

    return range;
}
