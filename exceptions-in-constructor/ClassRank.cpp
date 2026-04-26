#include <iostream>
#include <Windows.h>
#include "ShapeError.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

template<typename T, typename... Args>
void tryCreateShape(const char* shapeName, Args&&... args) {
    try {
        T shape(std::forward<Args>(args)...);
        std::cout << shape.getName() << " (";

        if constexpr (std::is_base_of_v<Triangle, T>) {
            std::cout << "стороны " << shape.getA() << ", " << shape.getB() << ", " << shape.getC()
                << "; углы " << shape.getAngleA() << ", " << shape.getAngleB() << ", " << shape.getAngleC();
        }
        else {
            std::cout << "стороны " << shape.getA() << ", " << shape.getB() << ", "
                << shape.getC() << ", " << shape.getD()
                << "; углы " << shape.getAngleA() << ", " << shape.getAngleB()
                << ", " << shape.getAngleC() << ", " << shape.getAngleD();
        }
        std::cout << ") создан" << std::endl;
    }
    catch (const ShapeError& e) {
        std::cout << "Ошибка создания фигуры \"" << shapeName << "\". Причина: " << e.what() << std::endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "--- Правильные фигуры ---\n" << std::endl;

   
    tryCreateShape<Triangle>("Треугольник", 10, 20, 30, 50, 60, 70);
    tryCreateShape<RightTriangle>("Прямоугольный треугольник", 3, 4, 5, 30, 60);
    tryCreateShape<IsoscelesTriangle>("Равнобедренный треугольник", 10, 20, 50, 80);
    tryCreateShape<EquilateralTriangle>("Равносторонний треугольник", 30);
    tryCreateShape<Quadrilateral>("Четырёхугольник", 10, 20, 30, 40, 80, 100, 80, 100);
    tryCreateShape<Rectangle>("Прямоугольник", 10, 20);
    tryCreateShape<Square>("Квадрат", 20);
    tryCreateShape<Parallelogram>("Параллелограмм", 20, 30, 60, 120);
    tryCreateShape<Rhombus>("Ромб", 30, 60, 120);

    std::cout << "\n--- Неправильные фигуры ---\n" << std::endl;

   
    tryCreateShape<Triangle>("Треугольник", -5, 20, 30, 50, 60, 70); 
    tryCreateShape<Triangle>("Треугольник", 10, 20, 30, 50, 60, 80);  
    tryCreateShape<RightTriangle>("Прямоугольный треугольник", 3, 4, 5, 45, 45);  
    tryCreateShape<IsoscelesTriangle>("Равнобедренный треугольник", 15, 20, 50, 80);  
    tryCreateShape<EquilateralTriangle>("Равносторонний треугольник", 30); 

  
    tryCreateShape<EquilateralTriangle>("Равносторонний треугольник", -30);  

    
    tryCreateShape<Quadrilateral>("Четырёхугольник", 10, 20, 30, 40, 100, 100, 100, 100);  
    tryCreateShape<Rectangle>("Прямоугольник", 10, 0);   
    tryCreateShape<Rectangle>("Прямоугольник", -10, 20); 
    tryCreateShape<Square>("Квадрат", -10);             
    tryCreateShape<Parallelogram>("Параллелограмм", 20, 30, 90, 80);  
    tryCreateShape<Rhombus>("Ромб", -30, 60, 120);       

    
    tryCreateShape<Parallelogram>("Параллелограмм", 20, 30, 100, 200);  

    return 0;
}}