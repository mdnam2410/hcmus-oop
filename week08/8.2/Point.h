#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
private:
	float m_x;
	float m_y;
public:
	Point();

	Point(float x, float y);

	Point(const Point& p);

	~Point();

	float getX() const;

	float getY() const;

	void SetX(float value);

	void SetY(float value);

	float distanceTo(const Point& other) const;

	Point& operator=(const Point& other);

	friend std::ostream& operator<<(std::ostream& os, const Point& point);

	friend std::istream& operator>>(std::istream& is, Point& point);

	friend float distance(const Point& a, const Point& b);

};

#endif