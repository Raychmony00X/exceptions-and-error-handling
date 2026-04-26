#include "EquilateralTriangle.h"
#include "ShapeError.h"
#include <sstream>

EquilateralTriangle::EquilateralTriangle(int side)
    : Triangle(side, side, side, 60, 60, 60) {
    if (getA() != getB() || getB() != getC()) {
        throw ShapeError("все стороны должны быть равны");
    }
    if (getAngleA() != 60 || getAngleB() != 60 || getAngleC() != 60) {
        throw ShapeError("все углы должны быть равны 60");
    }
}

const char* EquilateralTriangle::getName() const { return "Равносторонний треугольник"; }