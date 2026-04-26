#include "Rhombus.h"
#include "ShapeError.h"
#include <sstream>

Rhombus::Rhombus(int side, int A, int B)
    : Quadrilateral(side, side, side, side, A, B, A, B) {
    if (getA() != getB() || getB() != getC() || getC() != getD()) {
        throw ShapeError("все стороны должны быть равны");
    }
    if (getAngleA() != getAngleC() || getAngleB() != getAngleD()) {
        throw ShapeError("углы A,C и B,D должны быть попарно равны");
    }
}

const char* Rhombus::getName() const { return "Ромб"; }