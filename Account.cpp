#include "Account.h"

Account::Account()
{
    m_balance = 0.0F;
}

Account::Account(float initial_balance)
{
    m_balance = initial_balance;
}

Account::Account(const Account& acc)
{
    m_balance = acc.m_balance;
}

float Account::get_balance() const
{
    return m_balance;
}

void Account::income(float money)
{
    m_balance += money;
}

bool Account::withdraw(float money)
{
    if (money > m_balance)
        return false;
    
    m_balance -= money;
    return true;
}