// Simple_calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Инициализация переменных
	double num1 = 0;
	double num2 = 0;
	double result = 0;
	char operation = ' ';

	cout << "Введите через пробел два числа и знак операции (+ - / * %):" << endl;

	while (cin >> num1 >> num2 >> operation)
	{
		switch (operation)
		{
		case '+':
			cout << "Сумма " << num1 << " и " << num2 << " равна " << (num1 + num2) << endl;
			break;
		case '-':
			cout << "Разность " << num1 << " и " << num2 << " равна " << (num1 - num2) << endl;
			break;
		case '*':
			cout << "Произведение " << num1 << " и " << num2 << " равно " << (num1 * num2) << endl;
			break;
		case '/':
			cout << "Частное " << num1 << " и " << num2 << " равно " << (num1 + num2) << endl;
			break;
		case '%':
			cout << "Остаток деления " << num1 << " на " << num2 << " равен " << (num1 + num2) << endl;
			break;
		}
	}


    return 0;
}

