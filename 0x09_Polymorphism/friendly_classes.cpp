#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <ctime>
#include <cmath>

lass Customer{
    private:
        friend class GetCustomerData;
        std::string name;

    public:
        Customer(const std::string name){
            this->name = name;
        }
};

class GetCustomerData{
    public:
        static std::string getCustomerName(Customer& customer){
            return customer.name;
        }
};

int main(){

    Customer customer("Pablo");
    std::cout << "Customer name: " << GetCustomerData::getCustomerName(customer) << std::endl;

    return 0;
}
