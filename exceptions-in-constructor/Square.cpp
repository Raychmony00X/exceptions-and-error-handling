#include "Square.h"
#include "ShapeError.h"
#include <sstream>

Square::Square(int side)
    : Quadrilateral(side, side, side, side, 90, 90, 90, 90) {
    if (getA() != getB() || getB() != getC() || getC() != getD()) {
        throw ShapeError("все стороны должны быть равны");
    }
    if (getAngleA() != 90 || getAngleB() != 90 || getAngleC() != 90 || getAngleD() != 90) {
        throw ShapeError("все углы должны быть равны 90");
    }
}

const char* Square::getName() const { return "Квадрат"; }