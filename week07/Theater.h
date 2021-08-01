#ifndef THEATER_H
#define THEATER_H

#define DEFAULT_PRICE_REDUCTION 3.0

class Theater
{
protected:
    bool* m_seats;          // True if the seat has been booked, false otherwise
    int m_numberOfRows;     // Total rows of the theater
    int m_seatsPerRow;      // Number of seats per each row
    double m_basePrice;     // The price of the center row, unit: thousand VND
    double m_priceReduction;

public:
    Theater();

    /**
     * @param rows The number of rows
     * @param seatsPerRow The number of seats in each row
     * @param basePrice The price of the middle row(s)
     * @param priceReduction The amount of money reduced each row apart from the center row
     */
    Theater(int rows, int seatsPerRow, double basePrice, double priceReduction = DEFAULT_PRICE_REDUCTION);

    Theater(const Theater& other);

    ~Theater();

    /// Check if the seat is available for booking.
    bool isAvailable(int row, int seat) const;

    /// Check if the seat is booked.
    bool isBooked(int row, int seat) const;

    /// Compute the ticket price.
    double priceAt(int row, int seat) const;

    /**
     * @brief Attempt to book a seat
     * @returns True on success, false if the seat is already booked.
     */
    bool book(int row, int seat);

    /// The total revenue of the sold tickets
    double totalRevenue() const;
};

#endif