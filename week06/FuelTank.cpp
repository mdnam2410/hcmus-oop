#include "FuelTank.h"

FuelTank::FuelTank(double max_capacity)
{
    m_max_capacity = max_capacity;
    m_fuel = 0;
}

FuelTank::FuelTank(double fuel, double max_capacity) : FuelTank(max_capacity)
{
    fill(fuel);
}

FuelTank::FuelTank(const FuelTank& other)
{
    m_max_capacity = other.m_max_capacity;
    m_fuel = other.m_fuel;
}

void FuelTank::fill(double fuel)
{
    m_fuel += fuel;
    if (m_fuel > m_max_capacity)
        m_fuel = m_max_capacity;
}

void FuelTank::fill()
{
    m_fuel = m_max_capacity;
}

void FuelTank::use(double fuel)
{
    m_fuel -= fuel;
    if (m_fuel < 0)
        m_fuel = 0;
}

bool FuelTank::out_of_fuel() const
{
    return m_fuel == 0.0;
}

double FuelTank::fuel_remaining() const
{
    return m_fuel;
}
