#include "Triangle.h"
#include "ShapeError.h"
#include <sstream>

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
    validate();
}

void Triangle::validate() const {
    if (a <= 0 || b <= 0 || c <= 0) {
        std::stringstream ss;
        ss << "стороны должны быть положительными (a=" << a << ", b=" << b << ", c=" << c << ")";
        throw ShapeError(ss.str());
    }
    if (A <= 0 || B <= 0 || C <= 0) {
        std::stringstream ss;
        ss << "углы должны быть положительными (A=" << A << ", B=" << B << ", C=" << C << ")";
        throw ShapeError(ss.str());
    }
    if (A + B + C != 180) {
        std::stringstream ss;
        ss << "сумма углов не равна 180 (A+B+C=" << A + B + C << ")";
        throw ShapeError(ss.str());
    }
}

const char* Triangle::getName() const { return "Треугольник"; }