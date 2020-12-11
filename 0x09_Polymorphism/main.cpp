#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <cmath>

struct Shape{

    double length, width;
    Shape(double l = 1, double w = 1){
        this->length = l;
        this->width = w;
    }

    double area(){
        return this->length * this->width;
    }

    private:
        int id;
};

struct Circle: Shape{
    Circle(double width){
        this->width = width;
    }

    double area(){
        return 3.14159 * std::pow((this->width / 2), 2);
    }
};

int main(int argc, char* argv[]){

    Shape shape(15, 10);
    std::cout << "Rectangle area : " << shape.area() << std::endl;

    Circle circle(14);
    std::cout << "Circle area : " << circle.area() << std::endl;
    
    Shape square{10, 10};
    std::cout << "Square area : " << square.area() << std::endl;

    return 0;
}
