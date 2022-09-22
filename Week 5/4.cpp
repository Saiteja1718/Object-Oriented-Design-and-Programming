#include <iostream>
using namespace std;

class Bank
{
public:
    int getBalance()
    {
        return 0;
    }
};

class BankA 
{
    int amount;
public:
    BankA(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

class BankB 
{
    int amount;
public:
    BankB(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

class BankC 
{
    int amount;
public:
    BankC(int a)
    {
        amount = a;
    }

    int getBalance()
    {
        return amount;
    }
};

int main()
{
    BankA a(1000);
    BankB b(1500);
    BankC c(2000);
    a.getBalance();
    b.getBalance();
    c.getBalance();
    return 0;
} 