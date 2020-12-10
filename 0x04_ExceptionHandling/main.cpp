#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

std::vector<int> range(int start, int max, int step);
int main(){

    int i = 1;

    while(i <= 20){
        if((i % 2) == 0){
            i += 1;
            continue;
        }

        if(i == 15) break;

        std::cout << "Odd number: " << i << "\n"; 
        
        i += 1;
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
