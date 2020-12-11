#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <cmath>

class Shape{
    public:
        virtual double area() = 0;
};

class Circle: public Shape{
    private:
        double width;
    public:
        Circle(double width){
            this->width = width;
        }

        double area() override{
            return 3.14159 * std::pow((this->width / 2), 2);
        }
};

class Square: public Shape{
    private:
        double length;
    
    public:
        Square(double length){
            this->length = length;
        }

        double area() override{
            return this->length * this->length;
        }
};

class Rectangle: public Shape{
    private:
        double height;
        double width;
    
    public:
        Rectangle(double height, double width){
            this->height = height;
            this->width = width;
        }

        double area() override{
            return this->height * this->width;
        }
};

void showArea(Shape&);

int main(){
    Square square(10);
    Rectangle rectangle(10,15);
    Circle circle(14);
    
    showArea(square);
    showArea(rectangle);
    showArea(circle);

    return 0;
}

void showArea(Shape& shape){
    std::cout << "Area: " << shape.area() << std::endl;
}
