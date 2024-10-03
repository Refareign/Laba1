
#include <iostream>
#include <complex>
#include "Dynamic_Complex.h"
using namespace std;

static void help()
{
    cout << "--help - показать все команды" << endl;
    cout << "add - сложить два комплексных числа" << endl;
    cout << "subtract - вычесть первое комплексное число из второго" << endl;
    cout << "divide - поделить первое комплексное число на второе" << endl;
    cout << "multiply - умножить два комплексных числа" << endl;
    cout << "exit - выход из программы" << endl;
    cout << "---------" << endl;
};

bool is_valid(double& value, const string& prompt)
{
    while (true)
    {
        cout << prompt;
        cin >> value;

        // Проверяем, произошла ли ошибка ввода
        if (cin.fail())
        {
            cout << "Ошибка: введите допустимое число." << endl;
            cin.clear();  // Сбрасываем ошибку
            cin.ignore(32767, '\n'); // Очищаем буфер
        }
        else
        {
            return true;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Russian"); //русский язык в консоли. жаль, по умолчанию не поддерживается

    string command = " "; //строка для вводимых команд

    complex<double> result; //для хранения результатов вычислений

    help(); //чтобы сразу было понятно, какие команды существуют

    double realPart, imagPart; //реальная и мнимые части нашего комплексного числа

    while (command != "exit") //продолжаем, пока пользователь не выйдет
    {
        cout << "Введите команду: " << endl;
        cin >> command;
        if (command == "add") //сложение
        {
            is_valid(realPart, "Введите реальную часть первого числа: ");
            is_valid(imagPart, "Введите мнимую часть первого числа: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Введите реальную часть второго числа:");
            is_valid(imagPart, "Введите мнимую часть второго числа: ");
            cout << endl;
            complex<double> b(realPart, imagPart);
            
            result = add(a, b);
            cout << "Сложение первого и второго числа:" << result.real()
                << " + " << result.imag() << "i\n" << endl;
        }
        else if (command == "subtract") //вычитание
        {
            is_valid(realPart, "Введите реальную часть первого числа: ");
            is_valid(imagPart, "Введите мнимую часть первого числа: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Введите реальную часть второго числа:");
            is_valid(imagPart, "Введите мнимую часть второго числа: ");
            cout << endl;
            complex<double> b(realPart, imagPart);

            result = subtract(a, b);
            cout << "Вычитание второго числа из второго числа:" << result.real()
                << " + " << result.imag() << "i\n" << endl;
        }
        else if (command == "divide") //деление
        {
            is_valid(realPart, "Введите реальную часть первого числа: ");
            is_valid(imagPart, "Введите мнимую часть первого числа: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            if (a == 0.0)
            {
                cout << "На нули не дели" << endl;
            }
            else
            {
                is_valid(realPart, "Введите реальную часть второго числа:");
                is_valid(imagPart, "Введите мнимую часть второго числа: ");
                cout << endl;
                complex<double> b(realPart, imagPart);
                result = divide(a, b);
                cout << "Деление первого и второго числа:" << result.real()
                    << " + " << result.imag() << "i\n" << endl;
            }
        }
        else if (command == "multiply") //умножение
        {
            is_valid(realPart, "Введите реальную часть первого числа: ");
            is_valid(imagPart, "Введите мнимую часть первого числа: ");
            cout << endl;
            complex<double> a(realPart, imagPart);
            is_valid(realPart, "Введите реальную часть второго числа:");
            is_valid(imagPart, "Введите мнимую часть второго числа: ");
            cout << endl;
            complex<double> b(realPart, imagPart);

            result = multiply (a, b);
            cout << "Умножение первого и второго числа:" << result.real()
                << " + " << result.imag() << "i\n" << endl;
        }
        else if (command == "--help")
        {
            help();
        }
        else if (command == "exit")
        {
            cout << "Завершение программы" << endl;
        }
        else
        {
            cout << "Некорректная команда" << endl;
        }
    }
    return 0;
}