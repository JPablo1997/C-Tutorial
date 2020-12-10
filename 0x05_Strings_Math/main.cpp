#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int main(int argc, char** argv){

    // a - z : 97 - 122
    // A - Z : 65 - 90
    
    std::string normalStr, secretStr = "";

    std::cout << "Enter your message: ";
    std::cin >> normalStr;

    for(char c : normalStr){

        secretStr.append(std::to_string(((int) c) - 23));
    }
    
    //Convertir ASCII en CHAR
    //char chCharCode = 65; // A

    std::cout << "Secret: " << secretStr << std::endl;

    normalStr = "";

    for(int i = 0; i < secretStr.length(); i += 2){
        std::string sCharCode = "";
        sCharCode += secretStr[i];
        sCharCode += secretStr[i+1];

        char chCharCode = std::stoi(sCharCode) + 23;
        normalStr += chCharCode;
    }

    std::cout << "Original: " << normalStr << "\n";

    return 0;
}
