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

#include <deque>
#include <list>
#include <forward_list>

bool isEven(const int& val){
    return (val % 2) == 0;
}

int main(){
    std::deque<int> deq1;
    deq1.assign({11,12});
    deq1.push_back(5);
    deq1.push_front(1);
    
    std::cout << "Size: " << deq1.size() << std::endl;
    std::cout << deq1[0] << std::endl;
    std::cout << deq1.at(1) << std::endl;

    std::deque<int>::iterator it = deq1.begin();
    std::cout << it[0] << std::endl;

    deq1.insert(it, 0);

    for(auto& i: deq1){
        std::cout << i << std::endl;
    }
    it = deq1.begin();
    std::cout << it[0] << std::endl;
    
    int tempArr[5] = {6,7,8,9,10};

    deq1.insert(deq1.end(), tempArr, tempArr+5);
    deq1.erase(deq1.end());
    
    deq1.clear();
    std::cout << "New Values: " << std::endl;

    for(auto& i: deq1){
        std::cout << i << std::endl;
    }

    return 0;
}

