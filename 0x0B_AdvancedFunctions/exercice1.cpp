#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>

bool isItOdd(int);
std::vector<int> changeList(std::vector<int>, std::function<bool(int)>);

int main(){
    std::vector<int> listOfNums = {1,2,3,4,5,6,7};
    std::vector<int> oddList = changeList(listOfNums, isItOdd);

    for(auto num : oddList){
        std::cout << num << ", ";
    }

    std::cout << std::endl;

    return 0;
}

bool isItOdd(int num){
    return ((num % 2) != 0) ? true : false;
}
std::vector<int> changeList(std::vector<int> listOfNums, std::function<bool(int)> isItOdd){

    std::vector<int> oddList;

    for(auto num : listOfNums){
        if(isItOdd(num))
            oddList.push_back(num);
    }

    return oddList;
}


