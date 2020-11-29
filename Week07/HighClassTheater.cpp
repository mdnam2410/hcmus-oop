#include "HighClassTheater.h"

#include <ctime>

HighClassTheater::HighClassTheater() : Theater()
{
    m_discountRate = 0.0;
    m_isThursday = false;
}

HighClassTheater::HighClassTheater(int rows, int seatsPerRow, double basePrice,
                                   double discountRate, double priceReduction)
    : Theater(rows, seatsPerRow, basePrice, priceReduction)
{
    m_discountRate = discountRate;
    auto now = time(nullptr);
    m_isThursday = (std::localtime(&now)->tm_wday == 4);
}

HighClassTheater::HighClassTheater(const HighClassTheater& other)
    : Theater(other)
{
    m_discountRate = other.m_discountRate;
    m_isThursday = other.m_isThursday;
}

HighClassTheater::~HighClassTheater()
{
}

double HighClassTheater::priceAt(int row, int seat) const
{
    return Theater::priceAt(row, seat) * (m_isThursday ? (1.0 - m_discountRate) : 1.0);
}

double HighClassTheater::totalRevenue() const
{
    double revenue = 0.0;
    for (int row = 0; row < m_numberOfRows; ++row)
        for (int seat = 0; seat < m_seatsPerRow; ++seat)
            if (isBooked(row, seat))
                revenue += priceAt(row, seat);
    return revenue;
}