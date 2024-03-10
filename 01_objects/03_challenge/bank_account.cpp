#include "bank_account.h"
#include <iostream>

BankAccount::BankAccount(double balance) : balance(balance)
{
    print_current_money();
}

void BankAccount::deposit(double num)
{
    if (num < 0)
    {
        std::cout << "Please insert valid money." << std::endl;
        return;
    }
    balance += num;
    print_current_money();
}

void BankAccount::withdraw(double num)
{
    if (num < 0)
    {
        std::cout << "Please insert valid money." << std::endl;
        return;
    }
    if ((balance - num) < 0)
    {
        std::cout << "Insufficient balance!" << std::endl;
        return;
    }
    balance -= num;
    print_current_money();
}

double BankAccount::get_balance() const
{
    return balance;
}

void BankAccount::print_current_money() const
{
    std::cout << "Current money is " << balance << " yen." << std::endl;
}