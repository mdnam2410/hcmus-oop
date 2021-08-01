#include "Theater.h"

#include <cmath>

Theater::Theater()
{
    m_seats = nullptr;
    m_numberOfRows = m_seatsPerRow = 0;
    m_basePrice = 0.0;
    m_priceReduction = DEFAULT_PRICE_REDUCTION;
}

Theater::Theater(int rows, int seatsPerRow, double basePrice, double priceReduction)
{
    m_numberOfRows = rows;
    m_seatsPerRow = seatsPerRow;
    m_seats = new bool[m_numberOfRows * m_seatsPerRow]{ false };
    m_basePrice = basePrice;
    m_priceReduction = priceReduction;
}

Theater::Theater(const Theater& other)
{
    m_numberOfRows = other.m_numberOfRows;
    m_seatsPerRow = other.m_seatsPerRow;
    m_seats = new bool[m_numberOfRows * m_seatsPerRow];
    for (int i = 0; i < m_numberOfRows * m_seatsPerRow; ++i)
        m_seats[i] = other.m_seats[i];
    m_basePrice = other.m_basePrice;
    m_priceReduction = other.m_priceReduction;
}

Theater::~Theater()
{
    delete[] m_seats;
}

/// Check if the seat is booked.
bool Theater::isBooked(int row, int seat) const
{
    return m_seats[row * m_seatsPerRow + seat];
}

/// Check if the seat is available for booking.
bool Theater::isAvailable(int row, int seat) const
{
    return !isBooked(row, seat);
}

/// Compute the ticket price.
double Theater::priceAt(int row, int seat) const
{
    int middleRow = m_numberOfRows / 2;
    bool hasTwoMiddleRows = (m_numberOfRows % 2 == 0);

    // If the number of rows is even
    //
    // R5 <--- row (distance = |3 - 5|)
    // R4
    // R3 <--- middleRow
    // R2 <--- (also) middleRow
    // R1
    // R0 <--- row (distance = |3 - 0| - 1)
    return m_basePrice - m_priceReduction * 
            (std::abs(middleRow - row) - (hasTwoMiddleRows && row < middleRow ? 1 : 0));
} 

/**
 * @brief Attempt to book a seat
 * @returns True on success, false if the seat is already booked.
 */
bool Theater::book(int row, int seat)
{
    if (isBooked(row, seat))
        return false;
    m_seats[row * m_seatsPerRow + seat] = true;
    return true;
}

/// The total revenue of the sold tickets
double Theater::totalRevenue() const
{
    double revenue = 0.0;
    for (int row = 0; row < m_numberOfRows; ++row)
        for (int seat = 0; seat < m_seatsPerRow; ++seat)
            if (isBooked(row, seat))
                revenue += priceAt(row, seat);
    return revenue;
}