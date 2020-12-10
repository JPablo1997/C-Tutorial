#include<cstdlib>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<limits>

int main(int argc, char** argv){

    std::string sQuestion1 ("Enter Number 1: ");
    std::string sQuestion2 ("Enter Number 2: ");
    std::string sNum1, sNum2;

    std::cout << sQuestion1;
    getline(std::cin, sNum1);

    std::cout << sQuestion2;
    getline(std::cin, sNum2);

    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);

    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

}
