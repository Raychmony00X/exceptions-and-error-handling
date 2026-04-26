#include "RightTriangle.h"
#include "ShapeError.h"
#include <sstream>

RightTriangle::RightTriangle(int a, int b, int c, int A, int B)
    : Triangle(a, b, c, A, B, 90) {
    if (getAngleC() != 90) {
        throw ShapeError("угол C должен быть равен 90");
    }
}

const char* RightTriangle::getName() const { return "Прямоугольный треугольник"; }