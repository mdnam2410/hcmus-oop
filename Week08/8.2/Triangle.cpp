#include "Triangle.h"

#include <math.h>

Triangle::Triangle() : m_a {0, 0}, m_b {0, 0}, m_c {0, 0}
{
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c)
    : m_a {a}, m_b {b}, m_c {c}
{
}

Triangle::Triangle(const Triangle& t) : m_a {t.m_a}, m_b {t.m_b}, m_c {t.m_c}
{
}

Triangle::~Triangle()
{
}

Point Triangle::A() const {
    return m_a;
}

Point Triangle::B() const {
    return m_b;
}

Point Triangle::C() const {
    return m_c;
}

void Triangle::SetA(const Point& p) {
    m_a = p;
}

void Triangle::SetB(const Point& p) {
    m_b = p;
}

void Triangle::SetC(const Point& p) {
    m_c = p;
}

float Triangle::AB() const {
    return m_a.distanceTo(m_b);
}

float Triangle::BC() const {
    return m_b.distanceTo(m_c);
}

float Triangle::AC() const {
    return m_a.distanceTo(m_c);
}

float Triangle::perimeter() const {
    return AB() + BC() + AC();
}

float Triangle::area() const {
    float p = perimeter() / 2;
    return sqrt(p * (p - AB()) * (p - BC()) * (p - AC()));
}

void Triangle::info() const {
    std::cout << "Class: Triangle, type: " << type() << ", points: "
              << "A: " << m_a << ", B: " << m_b << ", C: " << m_c
              << ", perimeter: " << perimeter() << ", area: " << area() << '\n';
}

std::string Triangle::type() const {
    return "triangle";
}
