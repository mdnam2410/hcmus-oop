#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
public:
    static const double s_fuel_consumption_gained;    // Unit: L/km/kg

private:
    double m_cargo_weight; // Unit: kg
public:
    Car() = delete;

    Car(double fuel_consumption, const FuelTank& fuel_tank);

    Car(double cargo_weight, double fuel_consumption, const FuelTank& fuel_tank);

    Car(const Car& car) = default;

    void load(double weight);

    void unload(double weight);

    void info() const;
};

#endif