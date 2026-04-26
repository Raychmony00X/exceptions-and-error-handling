#include "Parallelogram.h"
#include "ShapeError.h"
#include <sstream>

Parallelogram::Parallelogram(int a, int b, int A, int B)
    : Quadrilateral(a, b, a, b, A, B, A, B) {
    if (getA() != getC() || getB() != getD()) {
        throw ShapeError("стороны a,c и b,d должны быть попарно равны");
    }
    if (getAngleA() != getAngleC() || getAngleB() != getAngleD()) {
        throw ShapeError("углы A,C и B,D должны быть попарно равны");
    }
}

const char* Parallelogram::getName() const { return "Параллелограмм"; }