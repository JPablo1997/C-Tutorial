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
#include <sstream>
#include <thread>
#include <chrono>
#include <mutex>

void findPrimes(unsigned int, unsigned int, std::vector<unsigned int>&);

int main(){
    std::vector<unsigned int> primeVect;
    int startTime = clock();
    findPrimes(1, 100000, primeVect);

    for(auto val: primeVect){
        std::cout << val << "\n";
    }

    int endTime = clock();

    std::cout << "Execution time: " << (endTime - startTime)/double(CLOCKS_PER_SEC) << " s"<< std::endl;

    return 0;
}

void findPrimes(unsigned int start, unsigned int end, std::vector<unsigned int>& vect){
    for(unsigned int i = start; i <= end; i += 2){
        for(unsigned j = 2; j < i; j++){
            if((i % j) == 0){
                break;
            }else if((j + 1) == i){
                vect.push_back(i);
            }
        }
    }
}
