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
    // �������� ���� ����������� �����
DYNAMIC_COMPLEX_API complex<double> add(const complex<double>& a, const complex<double>& b);

// ��������� ���� ����������� �����
DYNAMIC_COMPLEX_API complex<double> subtract(const complex<double>& a, const complex<double>& b);

// ��������� ���� ����������� �����
DYNAMIC_COMPLEX_API complex<double> multiply(const complex<double>& a, const complex<double>& b);

// ������� ���� ����������� �����
DYNAMIC_COMPLEX_API complex<double> divide(const complex<double>& a, const complex<double>& b);

};