#include <complex>
#include <iostream>
#include "pch.h"
#include "Dynamic_Complex.h"
using namespace std;
// Сложение двух комплексных чисел
complex<double> add(const complex<double>& a, const complex<double>& b) {
    return a + b;
}

// Вычитание двух комплексных чисел
complex<double> subtract(const complex<double>& a, const complex<double>& b) {
    return a - b;
}

// Умножение двух комплексных чисел
complex<double> multiply(const complex<double>& a, const complex<double>& b) {
    return a * b;
}

// Деление двух комплексных чисел
complex<double> divide(const complex<double>& a, const complex<double>& b) {
    return a / b;
}