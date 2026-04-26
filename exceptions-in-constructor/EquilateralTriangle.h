#pragma once

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int side);  
    const char* getName() const override;
};