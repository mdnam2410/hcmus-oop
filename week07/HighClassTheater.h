#ifndef HIGHCLASSTHEATER_H
#define HIGHCLASSTHEATER_H

#include "Theater.h"

class HighClassTheater : public Theater
{
private:
    bool m_isThursday;
    double m_discountRate;

public:
    HighClassTheater();

    HighClassTheater(int rows, int seatsPerRow, double basePrice,
                     double discountRate, double priceReduction = DEFAULT_PRICE_REDUCTION);

    HighClassTheater(const HighClassTheater& other);

    ~HighClassTheater();

    /// Return the price of the ticket
    double priceAt(int row, int seat) const;

    /// Return the total revenue in selling tickets
    double totalRevenue() const;
};

#endif