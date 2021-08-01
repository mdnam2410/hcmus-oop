#include "Truck.h"

#include <iostream>

const double Truck::s_fuel_consumption_gain = 1.0 / 1000 / 100;

Truck::Truck(double fuel_consumption, const FuelTank& fuel_tank)
    : Vehicle(fuel_consumption, fuel_tank), m_cargo_weight{}
{
}

Truck::Truck(double cargo_weight, double fuel_consumption, const FuelTank& fuel_tank)
    : m_cargo_weight{ cargo_weight }, Vehicle{ fuel_consumption, fuel_tank }
{
}

void Truck::load(double weight)
{
    m_cargo_weight += weight;
    m_fuel_consumption += weight * s_fuel_consumption_gain;
}

void Truck::unload(double weight)
{
    weight = (weight > m_cargo_weight ? m_cargo_weight : weight);
    m_cargo_weight -= weight;
    m_fuel_consumption -= weight * s_fuel_consumption_gain;
}

void Truck::info() const
{
    Vehicle::info();
    std::cout << "Cargo weight: " << m_cargo_weight << " kg\n";
}
