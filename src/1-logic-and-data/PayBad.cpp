#include <iostream>

using namespace std;

namespace bad
{

using Currency = int;

class Wallet
{
public:
    void fetchCash(Currency amount)
    {
        m_cashAmount = m_cashAmount - amount;
    }

    Currency getCashAmount() const
    {
        return m_cashAmount;
    }

private:
    Currency m_cashAmount;
};

class Customer
{
public:
    Wallet& getWallet()
    {
        return m_wallet;
    }
private:
    Wallet m_wallet;
};

void chargeCustomerByCreditCard(Customer &customer, Currency amount){
    //code to pay by credit card
}

void chargeCustomer(Customer &customer, Currency amount){
    auto &customerWallet = customer.getWallet();

    if (customerWallet.getCashAmount() > amount)
        customerWallet.fetchCash(amount);
    else
        chargeCustomerByCreditCard(customer, amount);
}

} //namespace bad
