#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

class Warrior{

    private:
        std::string name;
        int attack;
        int defense;
        int live;
    public:
        std::string getName() { return name; }
        void setName(const std::string name) { this->name = name; }
        int getAttack() { return attack; }
        void setAttack(int attack){this->attack = attack;}
        int getDefense() { return defense; }
        void setDefense(int defense){this->defense = defense;}
        int getLive(){return live;}
        void setLive(int live){this->live = live;}
        Warrior(std::string, int, int, int);
        Warrior();
        ~Warrior();
        void toString();
};

Warrior::Warrior(std::string name, int attack, int defense, int live){
    this->name = name;
    this->attack = attack;
    this->defense = defense;
    this->live = live;
}

Warrior::Warrior(){
    this->name = ' ';
    this->attack = 0;
    this->defense = 0;
    this->live = 0;
}

Warrior::~Warrior(){
    std::cout << "Warrior " << this->getName() << " destroyed\n";
}

void Warrior::toString(){
    std::cout << "Warrior " << this->getName() << " Have " << this->getAttack() << " points on Attack and " << 
        this->getDefense() << " points on Defense" << std::endl;
}

class Battle{

    public:
        static void fight(Warrior warrior1, Warrior warrior2){
           //impar ataca warrior1
           //par ataca warrior2

            bool isOver = false; 
            int newLive = 0;

            while(! isOver){
                if((rand() % 2) == 0){
                    newLive = warrior1.getLive() + warrior1.getDefense() - warrior2.getAttack();
                    warrior1.setLive(newLive);
                    std::cout << warrior2.getName() << " attacks." << std::endl;
                    std::cout << warrior1.getName() << " is down to " << warrior1.getLive() << " points of life."<< std::endl;
                }else{
                    newLive = warrior2.getLive() + warrior2.getDefense() - warrior1.getAttack();
                    warrior2.setLive(newLive);
                    std::cout << warrior1.getName() << " attacks." << std::endl;
                    std::cout << warrior2.getName() << " is down to " << warrior2.getLive() << " points of life."<< std::endl;
                }

                if(warrior1.getLive() <= 0 || warrior2.getLive() <= 0){
                    getAttackResults(warrior1, warrior2);
                    isOver = true;
                }
            }
        }

    private:    
        static void getAttackResults(Warrior warrior1, Warrior warrior2){
            std::string result = " ";
            if(warrior1.getLive() <= 0){
                warrior1.setLive(0);
                std::cout << warrior1.getName() << " died and " << warrior2.getName() << " win." << std::endl;
            }else{
                warrior2.setLive(0);
                std::cout << warrior2.getName() << " died and " << warrior1.getName() << " win." << std::endl;
            }
        }
};

int main(){

    srand(time(NULL));
    
    Warrior iron("Iron Man", 50, 35, 500);
    Warrior hulk("Hulk", 40, 45, 300);

    iron.toString();
    hulk.toString();

    Battle::fight(iron, hulk);

    return 0;
}
