#include <complex>
#include <iostream>
#include "pch.h"
#include "Dynamic_Complex.h"
using namespace std;
// �������� ���� ����������� �����
complex<double> add(const complex<double>& a, const complex<double>& b) {
    return a + b;
}

// ��������� ���� ����������� �����
complex<double> subtract(const complex<double>& a, const complex<double>& b) {
    return a - b;
}

// ��������� ���� ����������� �����
complex<double> multiply(const complex<double>& a, const complex<double>& b) {
    return a * b;
}

// ������� ���� ����������� �����
complex<double> divide(const complex<double>& a, const complex<double>& b) {
    return a / b;
}