#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
public:
    static const double s_fuel_consumption_gain;

private:
    double m_cargo_weight;

public:
    Truck() = delete;

    Truck(double fuel_consumption, const FuelTank& fuel_tank);

    Truck(double cargo_weight, double fuel_consumption, const FuelTank& fuel_tank);

    Truck(const Truck& truck) = default;

    void load(double weight);

    void unload(double weight);

    void info() const;
};

#endif