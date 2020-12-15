#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <functional>
#include <cmath>
#include <iterator>
#include <stdio.h>
#include <sstream>
#include <thread>
#include <chrono>
#include <mutex>

int getRandom(int);
std::string getTime();

double acctBalance = 100;
std::mutex acctLock;

void getMoney(int, double);

int main(){
    std::thread threads[10];

    for(int i =0; i < 10; i++ ){
        threads[i] = std::thread(getMoney, i, getRandom(15));
    }
    
    for(int i =0; i < 10; i++ ){
        threads[i].join();
    }

    return 0;
}

int getRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

std::string getTime(){

    auto nowTime = std::chrono::system_clock::now();
    std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    return std::ctime(&sleepTime);

}

void getMoney(int id, double retiro){
    std::lock_guard<std::mutex> lock(acctLock);
    std::this_thread::sleep_for(std::chrono::seconds(3));
    std::cout << id << " intento retirar $" << retiro << " en " << getTime() << std::endl;
    if((acctBalance - retiro) >= 0){
        acctBalance -= retiro;
        std::cout << "New Account Balance is $" << acctBalance << "\n";
    }else{
        std::cout << "No hay suficiente dinero\n";
        std::cout << "El balance actual es de $" << acctBalance << "\n";
    }
}
