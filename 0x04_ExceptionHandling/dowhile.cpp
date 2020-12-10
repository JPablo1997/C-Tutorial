#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int main(){

    srand(time(NULL));

    int secretNum = std::rand() % 11;
    int guessed = 0;

    do{

        std::cout << "Guess the number: ";
        std::cin >> guessed;
        if(guessed > secretNum) std::cout << "Too big\n";
        if(guessed < secretNum) std::cout << "Too small\n";

    }while(guessed != secretNum);

    std::cout << "Correct! secret number was: " << secretNum << "\n";
    
    return 0;
}
