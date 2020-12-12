#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>

#define PI 3.14159 
#define AREA_CIRCLE(radius) (PI * (std::pow(radius, 2)))

int main(int argc, char** argv){

    int radius = 5;
    printf("Circle area with %i cm of radius is %.2f\n", radius, AREA_CIRCLE(radius));
    
    return 0;
}
