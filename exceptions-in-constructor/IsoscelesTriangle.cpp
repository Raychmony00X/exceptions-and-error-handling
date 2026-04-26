#include "IsoscelesTriangle.h"
#include "ShapeError.h"
#include <sstream>

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B)
    : Triangle(a, b, a, A, B, A) {
    if (getA() != getC()) {
        throw ShapeError("стороны a и c должны быть равны");
    }
    if (getAngleA() != getAngleC()) {
        throw ShapeError("углы A и C должны быть равны");
    }
}

const char* IsoscelesTriangle::getName() const { return "Равнобедренный треугольник"; }