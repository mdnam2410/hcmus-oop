#ifndef TIMEDEPOSIT_H
#define TIMEDEPOSIT_H

#include "Account.h"

class TimeDeposit : public Account
{
private:
    // In months
    int m_term_duration;

    int m_month_elapsed;


    // Per month
    double m_rate;

public:
    TimeDeposit();

    /**
     * @param initial_balance The amount of money initially deposited
     * @param term The period of time based on which the interest is calculated
     * @param rate The interest rate per annum (per year)
     */ 
    TimeDeposit(double initial_balance, int term, double rate);

    TimeDeposit(const TimeDeposit& other);

    void info() const;

    /**
     * @return The current balance (initial balance + interest gain)
     */ 
    double current_balance() const;

    /**
     * @return Update the initial balance to use for the new cycle
     */
    void update_balance();

    void increase_month(int inc);
    
    void deposit(double money);

    bool withdraw(double money);

};

#endif