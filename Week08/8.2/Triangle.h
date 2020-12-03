#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Point.h"
#include "Shape.h"

class Triangle : public Shape {
private:
    Point m_a;
    Point m_b;
    Point m_c;
public:
    Triangle();

    Triangle(const Point& a, const Point& b, const Point& c);

    Triangle(const Triangle& t);

    ~Triangle();

    Point A() const;
    
    Point B() const;
    
    Point C() const;

    void SetA(const Point& p);
    
    void SetB(const Point& p);
    
    void SetC(const Point& p);

    float AB() const;

    float BC() const;

    float AC() const;

    virtual float perimeter() const;

    float area() const override;

    void info() const override;

    std::string type() const;
};

#endif
