#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
    float m_balance;

public:
    Account();

    Account(float initial_balance);

    Account(const Account& acc);

    float get_balance() const;

    void deposit(float money);

    bool withdraw(float money);
};

#endif