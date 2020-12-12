#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>

template<typename T>

void times2(T val){

    std::cout << val << " * 2 = " << (val * 2) << std::endl;
}

template<typename T>
T add(T val1, T val2){
    return val1 + val2;
}

template<typename T>
T max(T val1, T val2){
    return (val1 > val2) ? val1 : val2;
}

int main(){

    times2(5);
    times2(1.64);

    int sumValue = add(5, 10);
    std::cout << sumValue << std::endl;

    double anotherSumValue = add(10.5, 1.0);
    std::cout << anotherSumValue << std::endl;

    return 0;
}
