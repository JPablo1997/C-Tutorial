#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

//using std::cout;

int main(int argc, char** argv){

    std::string sEdad;
    unsigned short nEdad;

    std::cout << "Ingrese su edad: ";
    getline(std::cin, sEdad);

    nEdad = std::stoi(sEdad);

    if(nEdad == 18 || nEdad == 21 || nEdad > 65){
        std::cout << "Su edad es importante\n";
    }else{
        std::cout << "Su edad NO es importante\n";
    }

    return 0;
}
