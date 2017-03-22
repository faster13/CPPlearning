// Moda.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <Windows.h>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	//Инициализация переменных
	vector<int> mass;
	int temp;
	int num = 0;
	int counts = 0;
	int count_var = 1;
	
	//Ввод данных
	cout << "Введите целые положительные числа разделяя клавишей ENTER:" << endl;
	while (cin >> temp) 
	{ 
		if (temp == 999) break;
		mass.push_back(temp); 
	}

	temp = 0;

	for (int i = 1; i < mass.size(); ++i)
	{
		for (int j = 1; j < mass.size(); ++j)
		{
			if (mass[j] < mass[j - 1])
			{
				temp = mass[j];
				mass[j] = mass[j - 1];
				mass[j - 1] = temp;
			}
		}
	}

	num = mass[0];

	for (int i = 1; i < mass.size(); ++i)
	{
		cout << mass[i] << " ";
		if (mass[i - 1] == mass[i])
		{
			++count_var;
		}
		else
		{
			if (count_var > counts || count_var == counts)
			{
				num = mass[i - 1];
				counts = count_var;
			}
			count_var = 1;
		}
	}

	cout << endl;

	cout << "Мода последовательности равна " << num << ", т.к. повторяется " << counts << " раз." << endl;

	system("pause");




    return 0;
}

