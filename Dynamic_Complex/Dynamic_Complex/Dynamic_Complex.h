#pragma once
#include <complex>
#include <iostream>
using namespace std;

#ifdef DYNAMIC_COMPLEX_EXPORTS
#define DYNAMIC_COMPLEX_API __declspec(dllexport)
#else
#define DYNAMIC_COMPLEX_API __declspec(dllimport)
#endif

extern "C" 
{
    // Сложение двух комплексных чисел
DYNAMIC_COMPLEX_API complex<double> add(const complex<double>& a, const complex<double>& b);

// Вычитание двух комплексных чисел
DYNAMIC_COMPLEX_API complex<double> subtract(const complex<double>& a, const complex<double>& b);

// Умножение двух комплексных чисел
DYNAMIC_COMPLEX_API complex<double> multiply(const complex<double>& a, const complex<double>& b);

// Деление двух комплексных чисел
DYNAMIC_COMPLEX_API complex<double> divide(const complex<double>& a, const complex<double>& b);

};