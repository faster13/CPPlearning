// Word_calc.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>


int main()
{
	using namespace std;

	//Настройка консоли
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Инициализация переменных
	string operation = "";
	double num1 = 0, num2 = 0;

	//Ввод данных
	cout << "Введите операцию (+, -, *, /, плюс, минус, умножить, разделить) и два числа через пробел:" << endl;
	cin >> operation >> num1 >> num2;

	//Код
	if (operation == "+" || operation == "плюс")
	{
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	}
	if (operation == "-" || operation == "минус")
	{
		cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
	}
	if (operation == "*" || operation == "умножить")
	{
		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
	}
	if (operation == "/" || operation == "разделить")
	{
		cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
	}


	cout << "Нажмите любую клавишу..." << endl;
	cin >> operation;

    return 0;
}

