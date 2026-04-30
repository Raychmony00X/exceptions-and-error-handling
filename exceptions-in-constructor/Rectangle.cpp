#include "Rectangle.h"
#include "ShapeError.h"
#include <sstream>

MyRectangle::MyRectangle(int a, int b)
    : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
    if (getA() != getC() || getB() != getD()) {
        throw ShapeError("стороны a,c и b,d должны быть попарно равны");
    }
    if (getAngleA() != 90 || getAngleB() != 90 || getAngleC() != 90 || getAngleD() != 90) {
        throw ShapeError("все углы должны быть равны 90");
    }
}

const char* MyRectangle::getName() const { return "Прямоугольник"; }