#include "Vehicle.h"

#include <iostream>

Vehicle::Vehicle(double fuel_consumption, const FuelTank& fuel_tank)
    : m_distance_travelled{}, m_fuel_tank{ fuel_tank }, m_fuel_consumption{ fuel_consumption  }
{
}

Vehicle::Vehicle(double distance_travelled, double fuel_consumption, const FuelTank& fuel_tank)
    : m_distance_travelled{ distance_travelled }, m_fuel_consumption{ fuel_consumption }, m_fuel_tank{ fuel_tank }
{
}

void Vehicle::run(double distance)
{
    double fuel_burn = distance * m_fuel_consumption;
    double max_distance = fuel_remaining() / m_fuel_consumption;

    m_distance_travelled += (distance > max_distance ? max_distance : distance);
    m_fuel_tank.use(fuel_burn);
}

void Vehicle::fill(double fuel)
{
    m_fuel_tank.fill(fuel);
}

void Vehicle::fill()
{
    m_fuel_tank.fill();
}

bool Vehicle::out_of_fuel() const
{
    return m_fuel_tank.out_of_fuel();
}

double Vehicle::fuel_remaining() const
{
    return m_fuel_tank.fuel_remaining();
}

void Vehicle::info() const
{
    std::cout << "Distance travelled: " << m_distance_travelled << " km\n";
    std::cout << "Fuel consumption: " << m_fuel_consumption * 100.0 << " L/100 km\n";
    std::cout << "Fuel left: " << m_fuel_tank.fuel_remaining() << " L\n";
}