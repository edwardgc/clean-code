#include <iostream>

using namespace std;

namespace good
{

using Currency = int;

class Customer
{
public:
    void pay(Currency amount);
};

void chargeCustomer(Customer *customer, Currency amount){
    customer->pay(amount);
}
void Customer::pay(Currency amount){
    //code to pay
}

} //namespace good
