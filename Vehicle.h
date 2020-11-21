#ifndef VEHICLE_H
#define VEHICLE_H

#include "FuelTank.h"

class Vehicle
{
protected:
    FuelTank m_fuel_tank;

    // Unit: L/km
    double m_distance_travelled;

    // The amount of fuel used over a unit of distance
    // Unit: L/km
    double m_fuel_consumption;

public:
    Vehicle() = delete;

    /**
     * @param fuel_consumption Unit: L/km
     */ 
    Vehicle(double fuel_consumption, const FuelTank& fuel_tank);

    /**
     * @param distance_travelled Unit: km
     * @param fuel_consumption Unit: L/km
     */
    Vehicle(double distance_travelled, double fuel_consumption, const FuelTank& fuel_tank);

    Vehicle(const Vehicle& vehicle) = default;

    void run(double distance);

    void fill(double fuel);

    /**
     * Refill the fuel tank to its full
     */ 
    void fill();

    bool out_of_fuel() const;

    double fuel_remaining() const;

    void info() const;
};

#endif