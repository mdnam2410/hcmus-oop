#include "Rectangle.h"

Rectangle::Rectangle() : m_topLeft {0, 0}, m_bottomRight {0, 0}
{
}

Rectangle::Rectangle(const Point& topLeft, const Point& bottomRight)
    : m_topLeft {topLeft}, m_bottomRight {bottomRight}
{
}

Rectangle::~Rectangle()
{
}

void Rectangle::info() const {
    std::cout << "Class: Rectangle, type: " << type()
              << ", top left: " << m_topLeft << ", bottom right: " << m_bottomRight
              << ", perimeter: " << perimeter () << ", area: " << area() << '\n';
}

float Rectangle::perimeter() const {
    Point topRight {m_bottomRight.getX(), m_topLeft.getY()};
    return 2.0F * (distance(m_topLeft, topRight) + distance(m_bottomRight, topRight));
}

std::string Rectangle::type() const {
    return "rectangle";
}

float Rectangle::area() const {
    Point topRight {m_bottomRight.getX(), m_topLeft.getY()};
    return distance(topRight, m_topLeft) * distance(topRight, m_bottomRight);
}