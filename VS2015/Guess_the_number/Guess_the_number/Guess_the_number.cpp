// Guess_thr_number.cpp: определяет точку входа для консольного приложения.
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
	int min = 1;
	int max = 100;
	int average = 0;
	char answer = ' ';
	int result = 0;

	//Ввод данных
	cout << "Загадайте число от 1 до 100." << endl;
	average = max / 2;

	while (result == 0)
	{
		cout << "Ваше число < " << average << "? (д/н): ";
		cin >> answer;

		if (answer == 'д')
		{
			max = average;
			average = min + (max - min) / 2;
			//cout << min << " " << max << " " << average << endl;
		}
		else if (answer == 'н')
		{
			min = average;
			average = min + (max - min) / 2;
			//cout << min << " " << max << " " << average << endl;
		}
		if (max - average == 1)
		{
			result = average;
		}
	}

	cout << "Вы загадали число " << result << endl;
	system("pause");

	return 0;
}

