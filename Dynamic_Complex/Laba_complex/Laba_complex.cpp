#include <iostream>
#include <complex>
#include "Dynamic_Complex.h"

int main()
{
    std::complex<double> a(1.0, 2.0);  // Создаем комплексное число 1 + 2i
    std::complex<double> b(3.0, 4.0);  // Создаем комплексное число 3 + 4i

    std::complex<double> result;

    // Сложение
    result = add(a, b);
    std::cout << "Сложение: " << result.real() << " + " << result.imag() << "i\n";

    // Вычитание
    result = subtract(a, b);
    std::cout << "Вычитание: " << result.real() << " + " << result.imag() << "i\n";

    // Умножение
    result = multiply(a, b);
    std::cout << "Умножение: " << result.real() << " + " << result.imag() << "i\n";

    // Деление
    result = divide(a, b);
    std::cout << "Деление: " << result.real() << " + " << result.imag() << "i\n";
}
