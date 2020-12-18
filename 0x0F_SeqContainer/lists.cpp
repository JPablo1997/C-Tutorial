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
    int arr[5] = {1,2,3,4,5};
    std::list<int> list1;
    list1.insert(list1.begin(), arr, arr+5);

    list1.push_back(6);
    list1.push_front(0);

    std::cout << "Size: " << list1.size() << std::endl;
    //Con listas no podemos acceder a los valores usando indices
    //Para ello, una solucion es usar Iteradores
    std::list<int>::iterator it = list1.begin();
    it++;
    std::cout << "2nd Index: " << *it << std::endl;

    for(int& i: list1)
        std::cout << i << std::endl;

    list1.pop_front();
    list1.pop_back();
    std::cout << "--------------------------------------" << std::endl;

    for(int& i: list1)
        std::cout << i << std::endl;

    int arr2[] = {10,9,8,7,6,6};
    std::list<int> list2;
    list2.insert(list2.begin(), arr2, arr2+6);
    list2.sort();
    //list2.reverse();
    list2.unique();
    list2.remove(6);
    list2.remove_if(isEven);

    std::cout << "--------------------------------------" << std::endl;

    for(int& i: list2)
        std::cout << i << std::endl;

    return 0;
}

