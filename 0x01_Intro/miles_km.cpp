#include<cstdlib>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<limits>

int main(int argc, char** argv){

    //km = miles * 1.60934
    std::string sQuestion ("Enter miles: ");
    std::string sMiles;
    double dMiles, dKilometers;

    std::cout << sQuestion;
    getline(std::cin, sMiles);

    dMiles = std::stod(sMiles);

    dKilometers = dMiles * 1.60934;

    printf("Result: %.5f km\n", dKilometers);
}
