// Converter_bumbers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Инициализация переменных
	vector<string> words(10);
	words[0] = "ноль";
	words[1] = "один";
	words[2] = "два";
	words[3] = "три";
	words[4] = "четыре";
	words[5] = "пять";
	words[6] = "шесть";
	words[7] = "семь";
	words[8] = "восемь";
	words[9] = "девять";
	string number;

	cout << "Введите число от 1 до 9 прописью (напр.: пять):" << endl;

	while (cin >> number)
	{
		for (int i = 0; i < words.size(); ++i)
		{
			if (number == words[i]) cout << i << endl;
		}
	}

	system("pause");

	return 0;
}

