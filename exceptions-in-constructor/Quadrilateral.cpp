#include "Quadrilateral.h"
#include "ShapeError.h"
#include <sstream>

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
    : a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {
    validate();
}

void Quadrilateral::validate() const {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        std::stringstream ss;
        ss << "стороны должны быть положительными (a=" << a << ", b=" << b
            << ", c=" << c << ", d=" << d << ")";
        throw ShapeError(ss.str());
    }
    if (A <= 0 || B <= 0 || C <= 0 || D <= 0) {
        std::stringstream ss;
        ss << "углы должны быть положительными (A=" << A << ", B=" << B
            << ", C=" << C << ", D=" << D << ")";
        throw ShapeError(ss.str());
    }
    if (A + B + C + D != 360) {
        std::stringstream ss;
        ss << "сумма углов не равна 360 (A+B+C+D=" << A + B + C + D << ")";
        throw ShapeError(ss.str());
    }
}

const char* Quadrilateral::getName() const { return "Четырёхугольник"; }