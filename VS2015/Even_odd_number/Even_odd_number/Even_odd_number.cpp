// Even_odd_number.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>


int main()
{
	using namespace std;

	//Настройка консоли
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Инициализация переменных
	int number = 0;

	//Ввод данных
	cout << "Введите число и неажмите Enter: ";
	cin >> number;

	//Рассчёт и вывод
	if (number % 2 == 0)
	{
		cout << "Число " << number << " является чётным." << endl;
	}
	else
	{
		cout << "Число " << number << " является нечётным." << endl;
	}
	
	cout << "Нажмите любую клавишу...";
	cin >> number;


    return 0;
}

