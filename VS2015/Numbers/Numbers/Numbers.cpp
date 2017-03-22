// Numbers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>



int main()
{
	//Параметры программы
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//Инициализация переменных
	int val1 = 0;
	int val2 = 0;
	char any_key = ' ';

	//Ввод данных
	cout << "Введите переменную A: ";
	cin >> val1;
	cout << "Введите переменную B: ";
	cin >> val2;

	//Вычисления
	if (val1 > val2)
	{
		cout << "A > B" << endl;
	}
	else
	{
		cout << "A < B" << endl;
	}
	if (val1 == val2)
	{
		cout << "A = B";
	}

	cout << "A + B = " << (val1 + val2) << endl;
	cout << "A - B = " << (val1 - val2) << endl;
	cout << "A * B = " << (val1 * val2) << endl;
	cout << "A : B = " << (val1 / val2) << endl;

	cout << "Нажите любую клавишу..." << endl;
	cin >> any_key;
    return 0;
}

