#include "Account.h"

Account::Account()
{
    m_balance = 0.0F;
}

Account::Account(double initial_balance)
{
    m_balance = initial_balance;
}

Account::Account(const Account& acc)
{
    m_balance = acc.m_balance;
}

double Account::get_balance() const
{
    return m_balance;
}

void Account::deposit(double money)
{
    m_balance += money;
}

bool Account::withdraw(double money)
{
    if (money > m_balance)
        return false;
    
    m_balance -= money;
    return true;
}