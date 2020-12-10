#include<cstdlib>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<limits>

int g_iRandNum = 0;
const double PI = 3.14159;

int main(int argc, char** argv){

    bool bMarried = true;
    char chMyGrade = 'A';
    unsigned short int u16Age = 23;
    short int siWeight = 180;
    int nDays = 7;
    long lBigNum = 1100000;
    float fPi = 3.14159;
    double dbBigFloat = 1.111111111111111111;
    long double ldPi = 3.14159;
    auto whatWillIBe = true;

    std::cout << "Min Bool " <<
        std::numeric_limits<bool>::min() << "\n";
    std::cout << "Max Bool " <<
        std::numeric_limits<bool>::max() << "\n";

    std::cout << "Int size: " <<
        sizeof(int) << " Bytes\n";
    
    std::cout << "Short size: " <<
        sizeof(short) << " Bytes\n";

    std::cout << "Float size: " <<
        sizeof(float) << " Bytes\n";

    std::cout << "Double size: " <<
        sizeof(double) << " Bytes\n";

    std::cout << "Boolean size: " <<
        sizeof(bool) << " Bytes\n";

    std::cout << "Char size: " <<
        sizeof(char) << " Bytes\n";

    //Example with printf
    printf("%c %d %5d %.3f %s", 'A', 10, 5, 3.14159, "Hello Friend");
}

