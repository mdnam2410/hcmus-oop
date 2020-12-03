#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.h"
#include "Shape.h"

class Rectangle : public Shape {
private:
    Point m_topLeft;
    Point m_bottomRight;

public:
    Rectangle();

    Rectangle(const Point& topLeft, const Point& bottomRight);

    void info() const override;

    float perimeter() const override;

    float area() const override;

    std::string type() const override;

    ~Rectangle() override;
};

#endif
