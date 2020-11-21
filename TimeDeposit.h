#ifndef TIMEDEPOSIT_H
#define TIMEDEPOSIT_H

#include "Account.h"

class TimeDeposit : public Account
{
private:
    // In months
    int m_term_duration;

    // Month elapsed in the cycle
    int m_month_elapsed;

    int m_month_since_first_deposit;

    // Per month
    double m_rate;

public:
    TimeDeposit();

    /**
     * @param initial_balance The amount of money initially deposited
     * @param term Term duration (by month)
     * @param rate The interest rate per annum (per year)
     */ 
    TimeDeposit(double initial_balance, int term, double rate);

    TimeDeposit(const TimeDeposit& other);

    void info() const;

    /**
     * @return Update the initial balance to use for the new cycle
     */
    void update_balance();

    void increase_month(int inc);
    
    void deposit(double money);

    bool withdraw(double money);

};

#endif