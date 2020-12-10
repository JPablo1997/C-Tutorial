#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

void assignAge3(int* pAge);

int main(){

    int age = 43;
    assignAge3(&age);

    std::cout << "Age: " << age << "\n";

    return 0;
}


void assignAge3(int* pAge){
    *pAge = 24;
}
