#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <algorithm>

std::vector<int> generateRandVec(int numOfNums, int min, int max);

int main(int argc, char** argv){
 
    std::vector<int> vecVals = generateRandVec(10, 1, 50);
    std::vector<int> filterVec;
    int divisor = 0;

    std::cout << "Insert a divisor value: " << "\n";
    std::cin >> divisor;

    std::copy_if(vecVals.begin(), vecVals.end(), std::back_inserter(filterVec),
            [divisor](int x){ return (x % divisor) == 0; });

    for(int x: filterVec) std::cout << x << "\n";

    return 0;
}

std::vector<int> generateRandVec(int numOfNums, int min, int max){

    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;

    while(i < numOfNums){
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }

    return vecValues;
}


