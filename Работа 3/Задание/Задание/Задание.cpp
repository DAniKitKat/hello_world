#include <iostream>

/// <summary>
/// Вычисляет площадь треугольника по высоте и основанию
/// </summary>
/// <param name="a">Длина основания треугольника</param>
/// <param name="h">Высота треугольника</param>
/// <returns>Площадь треугольника</returns>
/// <remarks>Высота и оснавание долдны быть положительными,иначе возвращает -1</remarks>
double triangleArea(int a, int h)
{
    if (a < 0 or h < 0) // +1 к η2
    {
        return -1; // +1 к η1
    }
    return a * h * 0.5; // +1 к η1
}

int main()
{
    double area = triangleArea(2, 3); // +1 к η1
    setlocale(0, "Russian"); // +1 к η1
    std::cout << "Поиск площади трегуальника по основанию и высоте:\n"; // +1 к η1
    std::cout << "Треугольник c основанием 2 и высотой 3: " << area << std::endl; // +1 к η1
}

// Сложность по Джилбо: 6 + 1 = 7