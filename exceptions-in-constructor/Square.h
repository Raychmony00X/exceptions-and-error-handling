#pragma once

#include "Quadrilateral.h"

class Square : public Quadrilateral {
public:
    Square(int side);
    const char* getName() const;
};