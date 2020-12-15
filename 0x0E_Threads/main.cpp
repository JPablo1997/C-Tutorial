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
void executeThread(int);

int main(){
    std::thread th1(executeThread, 1);
    //Indica que main debe esperar a que se termine de ejecutar este thread para proseguir con la ejecucion de su codigo
    th1.join();

    std::thread th2(executeThread, 2);
    th2.join();

    return 0;
}

int getRandom(int max){
    srand(time(NULL));
    return rand() % max;
}

void executeThread(int id){
    auto nowTime = std::chrono::system_clock::now();
    std::time_t sleepTime = std::chrono::system_clock::to_time_t(nowTime);
    tm myLocalTime = *localtime(&sleepTime);
    
    std::cout << "Thread " << id << " Sleep time: " <<
        std::ctime(&sleepTime) << std::endl;
    
    std::cout << "Month: " << myLocalTime.tm_mon << "\n";
    std::cout << "Day: " << myLocalTime.tm_mday << "\n";
    std::cout << "Year: " << myLocalTime.tm_year << "\n";
    std::cout << "Hours: " << myLocalTime.tm_hour << "\n";
    std::cout << "Mins: " << myLocalTime.tm_min << "\n";
    std::cout << "Seconds: " << myLocalTime.tm_sec << "\n";
    
    std::this_thread::sleep_for(std::chrono::seconds(getRandom(5)));
    
    nowTime = std::chrono::system_clock::now();
    sleepTime = std::chrono::system_clock::to_time_t(nowTime);

    std::cout << "Thread " << id << " Awake time: " <<
        std::ctime(&sleepTime) << std::endl;

}
