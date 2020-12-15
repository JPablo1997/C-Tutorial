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

std::mutex vectLock;
std::vector<unsigned int> primeVect;
void findPrimes(unsigned int, unsigned int);
void findPrimesWithThreads(unsigned int, unsigned int, unsigned int);

int main(){
    int startTime = clock();
    findPrimesWithThreads(1, 100000, 3);   
    int endTime = clock();

    for(auto i: primeVect)
        std::cout << i << std::endl;

    std::cout << "Execution time: " << (endTime - startTime)/double(CLOCKS_PER_SEC) << " s"<< std::endl;

    return 0;
}

void findPrimes(unsigned int start, unsigned int end){
    for(unsigned int i = start; i <= end; i += 2){
        for(unsigned j = 2; j < i; j++){
            if((i % j) == 0){
                break;
            }else if((j + 1) == i){
                vectLock.lock();
                primeVect.push_back(i);
                vectLock.unlock();
            }
        }
    }
}

void findPrimesWithThreads(unsigned int start, unsigned int end, unsigned int numThreads){
    std::vector<std::thread> threadVect;
    unsigned int threadSpread = end / numThreads;
    unsigned int newEnd = start + threadSpread - 1;
    for(unsigned int x = 0; x < numThreads; x++){
        threadVect.emplace_back(findPrimes, start, newEnd);
        start += threadSpread;
        newEnd += threadSpread;
    }

    for(auto& t: threadVect){
        t.join();
    }
}
