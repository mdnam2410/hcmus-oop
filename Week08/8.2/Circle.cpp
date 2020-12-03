#include "Circle.h"

#define CONSTANT_PI 3.14159265359F

Circle::Circle() : m_center {0.0F, 0.0F}, m_radius {0.0F}
{
}

Circle::Circle(const Point& center, float radius)
    : m_center {center}, m_radius {radius}
{
}

Circle::~Circle()
{
}

float Circle::perimeter() const {
    return 2 * CONSTANT_PI * m_radius;
}

float Circle::area() const {
    return CONSTANT_PI * m_radius * m_radius;
}

std::string Circle::type() const {
    return "circle";
}

void Circle::info() const {
    std::cout << "Class: Circle, type: " << type()
              << ", center: " << m_center << ", radius: " << m_radius
              << ", perimeter: " << perimeter() << ", area: " << area() << '\n';
}