#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
protected:
    double m_balance;

public:
    Account();

    Account(double initial_balance);

    Account(const Account& acc);

    double get_balance() const;

    void deposit(double money);

    bool withdraw(double money);
};

#endif