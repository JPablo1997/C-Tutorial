#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>

double multBy2(double num){
    return num * 2;
}

double multBy3(double num){
    return num * 3;
}


double doMath(std::function<double(double)> func, double num){
    return func(num);
}
int main(int argc, char** argv){
    
    auto times2 = multBy2;

    std::cout << "5 * 2 = " << times2(5) << std::endl;
    std::cout << "6 * 2 = " << doMath(times2, 6) << std::endl;

    std::vector<std::function<double(double)>> funcs(2);
    funcs[0] = multBy2;
    funcs[1] = multBy3;

    std::cout << "10 * 2 = " << funcs[0](10) << std::endl;
    std::cout << "10 * 3 = " << funcs[1](10) << std::endl;

    return 0;
}
