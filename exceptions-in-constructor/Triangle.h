#pragma once

class Triangle {
protected:
    int a, b, c, A, B, C;
    void validate() const; 
public:
    Triangle(int a, int b, int c, int A, int B, int C);
    virtual ~Triangle() = default;
    virtual const char* getName() const;
    int getA() const { return a; }
    int getB() const { return b; }
    int getC() const { return c; }
    int getAngleA() const { return A; }
    int getAngleB() const { return B; }
    int getAngleC() const { return C; }
};