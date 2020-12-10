#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>

int main(){

    try{
        std::cout << "Throwing Exception" << "\n";
        throw std::runtime_error("Error Ocurred");
        std::cout << "Can you print me?\n";
    }catch(std::exception &exp){
        std::cout << "Handled Exception: " << exp.what() << "\n";
    }catch(...){
        std::cout << "Default Exception" << "\n";
    }

    return 0;
}
