#include "TimeDeposit.h"

#include <iostream>
#include <math.h>

TimeDeposit::TimeDeposit() : Account()
{
    m_rate = 0.0F;
    m_term_duration = m_month_elapsed = 0;
}

TimeDeposit::TimeDeposit(double initial_balance, int term, double rate) : Account(initial_balance)
{
    m_rate = rate / 12;
    m_term_duration = term;
    m_month_elapsed = 0;
}

void TimeDeposit::info() const
{
    std::cout << "Term duration: " << m_term_duration << " months\n";
    std::cout << "Month since first deposit: " << m_month_since_first_deposit << '\n';
    std::cout << "Month until the next cycle: " << m_term_duration - m_month_elapsed << '\n';
    std::cout << "Rate: " << m_rate * 12 << " % per year (" << m_rate << " % per month)\n";
    std::cout << "Current balance: " << m_balance << '\n';
}

void TimeDeposit::deposit(double money)
{
    m_balance = (m_balance + money);
    m_month_elapsed = 0;
}

bool TimeDeposit::withdraw(double money)
{
    double cbalance = m_balance;
    if (money > cbalance)
        return false;
    
    m_balance = cbalance - money;
    m_month_elapsed = 0;
    return true;
}

void TimeDeposit::increase_month(int inc)
{
    m_month_elapsed += inc;
    m_month_since_first_deposit += inc;
    update_balance();
}

void TimeDeposit::update_balance()
{
    int number_of_terms = m_month_elapsed / m_term_duration;
    m_month_elapsed %= m_term_duration;
    m_balance *= std::pow(1.0 + m_rate, number_of_terms * m_term_duration);
}