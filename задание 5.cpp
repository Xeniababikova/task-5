﻿// Xcube.cpp: определяет точку входа для консольного приложения.
//
 
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus"); // кириллица в консоли
    double x; // значение под корнем
    cout << "Введите x: ";
    cin >> x;

    double yi = x, // начальное значение y
        yi1 = 0; // значение yi+1

    while (true)
    {
        yi1 = 0.5 * (yi + 3 * x / (2 * yi * yi + x / yi)); // итерационная формула вычисления корня кубического

        if (abs(yi1 - yi) < pow(10.0, -5.0)) // условие окончание итерации
            break; // выход из цикла

        yi = yi1; // сохраняем текущее значение y
    }

    cout << yi << endl;

    system("pause");
    return 0;
}