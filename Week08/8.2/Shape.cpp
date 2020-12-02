#include "Shape.h"

#include <iostream>

Shape::~Shape()
{
}

void Shape::info() const {
    std::cout << "This is class Shape." << '\n';
}