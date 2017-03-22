// Sort_val.cpp: определяет точку входа для консольного приложения.
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
	int val1 = 0, val2 = 0, val3 = 0, val_tmp = 0;
	string vals1 = " ", vals2 = " ", vals3 = " ", vals_tmp = " ";

	//Ввод числовых данных
	cout << "Введите три числа через пробел: ";
	cin >> val1 >> val2 >> val3;


	//Сортировка медодом "пузырька"
	if (val2 < val1)
	{
		val_tmp = val1;
		val1 = val2;
		val2 = val_tmp;
	}
	if (val3 < val2)
	{
		val_tmp = val2;
		val2 = val3;
		val3 = val_tmp;
	}
	if (val2 < val1)
	{
		val_tmp = val1;
		val1 = val2;
		val2 = val_tmp;
	}

	//Вывод результата
	cout << "Данные отсортированы в следующем порядке: " << val1 << " " << val2 << " " << val3 << endl;

	//Ввод строковых данных
	cout << "Теперь введите три слова через пробел: ";
	std::cin >> vals1 >> vals2 >> vals3;

	//Сортировка
	if (vals2 < vals1)
	{
		vals_tmp = vals1;
		vals1 = vals2;
		vals2 = vals_tmp;
	}
	if (vals3 < vals2)
	{
		vals_tmp = vals2;
		vals2 = vals3;
		vals3 = vals_tmp;
	}
	if (vals2 < vals1)
	{
		vals_tmp = vals1;
		vals1 = vals2;
		vals2 = vals_tmp;
	}

	//Вывод результата
	cout << "Данные отсортированы: " << vals1 << " " << vals2 << " " << vals3 << endl;
	


	//Пауза
	cout << "Нажмите любую клавишу..." << endl;
	cin >> val_tmp;
	

    return 0;
}

