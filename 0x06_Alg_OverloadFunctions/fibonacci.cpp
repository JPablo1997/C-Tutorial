#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>

int fibonacci(int number);

int main(){

    int number, res;
    std::cout << "Enter a Fibonacci Index: ";
    std::cin >> number;

    res = fibonacci(number);

    printf("Fib(%i) = %i\n", number, res);

    return 0;
}

int fibonacci(int number){
    int res = 0, i = 1;
    if(number == 0)
        return 0;
    else if(number == 1)
        return 1;
    else{
        while(i <= number){
            res += fibonacci(number - i);
            i++;
        }
        return res;
    }
}
