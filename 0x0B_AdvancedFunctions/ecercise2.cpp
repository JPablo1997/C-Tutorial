#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>

std::vector<char> getHAndTList(std::vector<char> possibleValues, int numberValuesToGenerate){
    srand(time(NULL));
    std::vector<char> hAndTList;

    for(int i = 0; i < numberValuesToGenerate; i++){
       int randIndex = rand() % 2;
       hAndTList.push_back(possibleValues[randIndex]);
    }

    return hAndTList;
}

int getNumOfMatches(std::vector<char> results, char value){
    int contador = 0;

    for(char c: results){
        if(c == value)
            contador++;    
    }

    return contador;
}

int main(){
    
    std::vector<char> possibleValues{'H', 'T'};
    std::vector<char> results = getHAndTList(possibleValues, 100);

    std::cout << "Number of Heads: " << getNumOfMatches(results, 'H') << std::endl;
    std::cout << "Number of Tails: " << getNumOfMatches(results, 'T') << std::endl;

    return 0;
}

