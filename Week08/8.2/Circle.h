#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include "Shape.h"

class Circle : public Shape {
private:
    Point m_center;
    float m_radius;

public:
    Circle();

    Circle(const Point& point, float radius);

    Circle(const Circle& circle) = default;

    ~Circle();

    float perimeter() const override;

    float area() const override;

    std::string type() const override;

    void info() const override;
};

#endif
