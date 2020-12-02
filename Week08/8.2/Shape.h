#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape {
public:
    virtual ~Shape();
    
    virtual void info() const = 0;

    virtual float perimeter() const = 0;

    virtual float area() const = 0;

    virtual std::string type() const = 0;
};

#endif