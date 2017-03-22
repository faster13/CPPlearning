// Prime_numbers_Eratosphen.cpp: определяет точку входа для консольного приложения.
//Поиск простых чисел по алгоритму Эратосфена

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
	vector<int> primes;
	int p = 2;
	int max = 0;
	int c = 2;

	//Ввод даных
	cout << "@Решето Эратосфена@" << endl;
	cout << "Введите верхнюю границу поиска простых чисел: ";
	cin >> max;
	//Заполняем вектор числами
	for (int i = 0; i <= max; ++i)
	{
		primes.push_back(i);
	}

	//Вычисления
	for (int j = p; j < primes.size(); ++j)
	{
		if (primes[j] != 0 && primes[j] >= 2)
		{
			p = primes[j];
			while (c * p < primes.size())
			{
				primes[c * p] = 0;
				++c;
			}
			c = 2;
		}
	}

	for (int i = 0; i < primes.size(); ++i)
	{
		if (primes[i] != 0 && primes[i] >= 2)
		{
			cout << primes[i] << " ";
		}
	}

	cout << endl;
	system("pause");

    return 0;
}

