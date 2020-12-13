#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>
#include <iterator>
#include <memory>
#include <stdio.h>

class Pizza{
    public:
        virtual void makePizza() = 0;
};

class NYStyleCrust{
    public:
        std::string addIngredients(){
            return "Crust so thin you can see through it\n\n";
        }
};

class DeepDishCrust{
    public:
        std::string addIngredients(){
            return "Super Awesome Chicago Deep Dish\n\n";
        }
};

template <typename T>
class LotsOfMeat: public T{
    public:
        std::string addIngredients(){
            return "Lots of Random meat, " + T::addIngredients();
        }
};

template <typename T>
class Vegan: public T{
    public:
        std::string addIngredients(){
            return "Vegan Cheese, Veggies, " + T::addIngredients();
        }
};

template <typename T>
class MeatNYStyle: public T, public Pizza{
    public:
        void makePizza(){
            std::cout << "Meat NY Style Pizza: " << T::addIngredients();
        }
};

template <typename T>
class VeganDeepDish: public T, public Pizza{
    public:
        void makePizza(){
            std::cout << "Vegan Deep Dish: " << T::addIngredients();
        }
};

int main(){

    std::vector<std::unique_ptr<Pizza>> pizzaOrders;
    pizzaOrders.emplace_back(new MeatNYStyle<LotsOfMeat<NYStyleCrust>>);
    pizzaOrders.emplace_back(new VeganDeepDish<Vegan<DeepDishCrust>>);

    for(auto &pizza: pizzaOrders){
        pizza->makePizza();
    }

    return 0;
}
