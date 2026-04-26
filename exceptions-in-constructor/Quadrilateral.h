#pragma once

class Quadrilateral {
protected:
    int a, b, c, d, A, B, C, D;
    void validate() const;
public:
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
    virtual ~Quadrilateral() = default;
    virtual const char* getName() const;
    int getA() const { return a; }
    int getB() const { return b; }
    int getC() const { return c; }
    int getD() const { return d; }
    int getAngleA() const { return A; }
    int getAngleB() const { return B; }
    int getAngleC() const { return C; }
    int getAngleD() const { return D; }
};