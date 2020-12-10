#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

std::vector<int> generateRandVec(int numOfNums, int min, int max);
void bubbleSort(std::vector<int>& theVec);

int main(int argc, char** argv){
    
    int numOfNums, min, max;
    std::vector<int> theVec;
        
    std::cout << "Ingrese el numero de valores para el vector: ";
    std::cin >> numOfNums;
    
    std::cout << "Ingrese el valor minimo que desea: ";
    std::cin >> min;
    
    std::cout << "Ingrese el valor maximo que desea: ";
    std::cin >> max;

    theVec = generateRandVec(numOfNums, min, max);
    std::cout << "Random Vector Generated: \n";

    for(auto val : theVec) std::cout << val << ", "; 

    bubbleSort(theVec);

    std::cout << "\nRandom Vector Ordenado: \n";

    for(auto val : theVec) std::cout << val << ", "; 
    std::cout << std::endl;

    return 0;
}

std::vector<int> generateRandVec(int numOfNums, int min, int max){

    std::vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;

    while(i < numOfNums){
        randVal = min + std::rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }

    return vecValues;
}

void bubbleSort(std::vector<int>& theVec){
    int i = theVec.size() - 1;

    while(i >= 1){
        int j = 0;
        while(j < i){
            if(theVec[j] > theVec[i]){
                int tmp = theVec[i];
                theVec[i] = theVec[j];
                theVec[j] = tmp;
            }
            j++;
        }
        i--;
    }
}


