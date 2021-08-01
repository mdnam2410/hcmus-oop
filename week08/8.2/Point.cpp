#include "Point.h"

#include <math.h>

Point::Point() {
	m_x = 0.0F;
	m_y = 0.0F;
}

Point::Point(float x, float y) {
	m_x = x;
	m_y = y;
}

Point::Point(const Point& p) {
	m_x = p.m_x;
	m_y = p.m_y;
}

Point::~Point()
{
}

float Point::getX() const {
	return m_x;
}

float Point::getY() const {
	return m_y;
}

void Point::SetX(float value) {
	m_x = value;
}

void Point::SetY(float value) {
	m_y = value;
}

float Point::distanceTo(const Point& other) const {
	float dx = m_x - other.m_x;
	float dy = m_y - other.m_y;

	return sqrt(dx * dx + dy * dy);
}

Point& Point::operator=(const Point& other) {
	if (this != &other) {
		m_x = other.m_x;
		m_y = other.m_y;
	}
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
	os << '(' << point.m_x << ", " << point.m_y << ")";
	return os;
}

std::istream& operator>>(std::istream& is, Point& point) {
	char separator;
	is >> point.m_x;
	is.get(separator);
	std::cin >> point.m_y;
	return is;
}

float distance(const Point& a, const Point& b) {
	return a.distanceTo(b);
}
