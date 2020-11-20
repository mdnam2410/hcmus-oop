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
    std::cout << "Term duration: " << m_term_duration << '\n';
    std::cout << "Month: " << m_month_elapsed << '\n';
    std::cout << "Rate: " << m_rate << '\n';
    std::cout << "Current balance: " << current_balance() << '\n';
}

double TimeDeposit::current_balance() const
{
    int number_of_terms = m_month_elapsed / m_term_duration;
    return m_balance * std::pow(1.0 + m_rate, number_of_terms * m_term_duration);
}

void TimeDeposit::deposit(double money)
{
    m_balance = (current_balance() + money);
    m_month_elapsed = 0;
}

bool TimeDeposit::withdraw(double money)
{
    double cbalance = current_balance();
    if (money > cbalance)
        return false;
    
    m_balance = cbalance - money;
    m_month_elapsed = 0;
    return true;
}

void TimeDeposit::increase_month(int inc)
{
    m_month_elapsed += inc;
}

