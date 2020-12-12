#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>
#include <iterator>

int main(int argc, char** argv){

    std::vector<int> nums = {1,2,3,4,5};
    std::vector<int>::iterator it;

    for(it = nums.begin(); it < nums.end(); ++it){

        //Hacemos dirrefence del puntero y luego obtenemos la direccion con el referece operator
        std::cout << "Memory position: " << &(*it) << " has value: " << *it << std::endl;
    }

    std::vector<int>::iterator it2 = nums.begin();
    advance(it2, 2);
    std::cout << "Memory position: " << &(*it2) << " has value: " << *it2 << std::endl;

    auto it3 = next(it2, 1);
    std::cout << "Memory position: " << &(*it3) << " has value: " << *it3 << std::endl;
    
    auto it4 = prev(it2, 1);
    std::cout << "Memory position: " << &(*it4) << " has value: " << *it4 << std::endl;


    return 0;
}
