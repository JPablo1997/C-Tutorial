#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){

    std::vector<int> myVec(10);
    std::iota(std::begin(myVec), std::end(myVec), 1);


    for(auto val: myVec){
        if((val % 2) == 0){
            std::cout << val << "\n";
        }
    }

    return 0;
}
