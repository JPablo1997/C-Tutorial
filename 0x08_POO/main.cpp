#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

class Animal{
    private:
        std::string name;
        double height;
        double weight;

        static int numOfAnimals;

    public:
        std::string getName(){return name;}
        void setName(std::string name){this->name = name;}
        
        double getHeight(){return height;}
        void setHeight(double height){this->height = height;}
        
        double getWeight(){return weight;}
        void setWeight(double weight){this->weight = weight;}
        
        void setAll(std::string, double, double);
        Animal(std::string, double, double);
        Animal();
        ~Animal();
        void toString();
        static int getNumOfAnimals(){return numOfAnimals;}
};

int Animal::numOfAnimals = 0;
void Animal::setAll(std::string name, double height, double weight){

    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(std::string name, double height, double weight){

    this->name = name;
    this->height = height;
    this->weight = weight;
    Animal::numOfAnimals++;
}

Animal::Animal(){

    this->name = ' ';
    this->height = 0;
    this->weight = 0;
    Animal::numOfAnimals++;
}

void Animal::toString(){
    std::cout << this->name << " is " << this->height << " cms and " <<
        this->weight << " kgs\n";
}

Animal::~Animal(){

    std::cout << "Animal " << this->name << " destroyed\n";
}

class Dog: public Animal{
    private:
        std::string sound = "Woof";

    public:
        void makeSound(){
            std::cout << "The dog " << this->getName() << " Says " <<
                this->sound << std::endl;
        }

        Dog(std::string, double, double, std::string);
        Dog(): Animal(){};
        void toString();

};

Dog::Dog(std::string name, double height, double weight, std::string sound): Animal(name, height, weight) {
    this->sound = sound;
}

void Dog::toString(){
    std::cout << this->getName() << " is " << this->getHeight() << " cms and " <<
        this->getWeight() << " kgs and says " << this->sound << std::endl;
}

int main(int argc, char** argv){

    Animal fred;
    fred.toString();
    fred.setHeight(40);
    fred.setWeight(50);
    fred.setName("Fred");
    fred.toString();

    Animal tom("Tom", 15, 25);
    tom.toString();

    Dog popi("Popi", 35, 80, "Wuuuuuuoffff");
    popi.toString();

    return 0;
} 
