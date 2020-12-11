#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <cmath>

class Shape{
    protected:
        double height;
        double width;
    
    public:
        Shape(double height, double width){
            this->height = height;
            this->width = width;
        }

        Shape(double length){
            this->height = length;
            this->width = length;
        }

        virtual double area(){
            return height*width;
        }
};

class Circle: public Shape{
    public:
        Circle(double width): Shape(width){}
        double area(){
            return 3.14159 * std::pow((this->width / 2), 2);
        }
};

void showArea(Shape&);

int main(){
    Shape square(10);
    Shape rectangle(10,15);
    Circle circle(14);
    
    showArea(square);
    showArea(rectangle);
    showArea(circle);

    return 0;
}

void showArea(Shape& shape){
    std::cout << "Area: " << shape.area() << std::endl;
}
