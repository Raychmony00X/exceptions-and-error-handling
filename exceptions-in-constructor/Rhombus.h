#pragma once

#include "Quadrilateral.h"

class Rhombus : public Quadrilateral {
public:
    Rhombus(int side, int A, int B);
    const char* getName() const;
};