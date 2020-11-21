#ifndef FUELTANK_H
#define FUELTANK_H

class FuelTank
{
private:
    double m_max_capacity;  // Unit: m^3
    double m_fuel;          // Unit: m^3

public:
    FuelTank() = delete;

    FuelTank(double max_capacity);

    FuelTank(double fuel, double max_capacity);

    FuelTank(const FuelTank& other);

    /**
     * Increase the tank up to maximum capacity by the amount of fuel specified
     */
    void fill(double fuel);

    /**
     * Refill the fuel tank to its full
     */
    void fill();

    void use(double fuel);

    bool out_of_fuel() const;

    double fuel_remaining() const;
};

#endif