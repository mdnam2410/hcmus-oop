#include "Car.h"

#include <iostream>

const double Car::s_fuel_consumption_gained = 0.0001;

Car::Car(double fuel_consumption, const FuelTank& fuel_tank)
    : Vehicle(fuel_consumption, fuel_tank), m_cargo_weight{}
{
}

Car::Car(double cargo_weight, double fuel_consumption, const FuelTank& fuel_tank)
    : m_cargo_weight{ cargo_weight }, Vehicle{ fuel_consumption, fuel_tank }
{
}

void Car::load(double weight)
{
    m_cargo_weight += weight;
    m_fuel_consumption += weight * s_fuel_consumption_gained;
}

void Car::unload(double weight)
{
    weight = (weight > m_cargo_weight ? m_cargo_weight : weight);
    m_cargo_weight -= weight;
    m_fuel_consumption -= weight * s_fuel_consumption_gained;
}

void Car::info() const
{
    Vehicle::info();
    std::cout << "Cargo weight: " << m_cargo_weight << " kg\n";
}