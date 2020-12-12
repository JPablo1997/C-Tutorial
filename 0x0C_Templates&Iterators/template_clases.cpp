#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>

template<typename T, typename U>
class Animal{
    public:
        T height;
        U weight;
        static int numOfAnimals;
        Animal(T height, U weight){
            this->height = height;
            this->weight = weight;
        }
        void getData(){
            std::cout << "Height: " << this->height << " and Weight: " << this->weight << std::endl;
        }
};

template<typename T, typename U> int Animal<T,U>::numOfAnimals;

int main(){

    Animal<int, double> rocky(50, 45.5);
    rocky.getData();
    Animal<double, int> popi(35.2, 50);
    popi.getData();
    //Test
    //Animal<double, int> popie(35, 50.2);
    //popie.getData();


    return 0;
}
