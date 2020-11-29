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

    double priceAt(int row, int seat) const;

    double totalRevenue() const;
};

#endif