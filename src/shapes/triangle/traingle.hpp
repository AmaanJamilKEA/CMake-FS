#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

#include "shapes/shape.hpp"

class Triangle : public Shape {
public:
    Triangle(double side);
    double area();
    double perimeter();
private:
    double side;
};

#endif