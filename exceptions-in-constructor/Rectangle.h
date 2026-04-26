#pragma once

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral {
public:
    Rectangle(int a, int b);
    const char* getName() const;
    int getA() const { return Quadrilateral::getA(); }
    int getB() const { return Quadrilateral::getB(); }
    int getC() const { return Quadrilateral::getC(); }
    int getD() const { return Quadrilateral::getD(); }
    int getAngleA() const { return Quadrilateral::getAngleA(); }
    int getAngleB() const { return Quadrilateral::getAngleB(); }
    int getAngleC() const { return Quadrilateral::getAngleC(); }
    int getAngleD() const { return Quadrilateral::getAngleD(); }
};