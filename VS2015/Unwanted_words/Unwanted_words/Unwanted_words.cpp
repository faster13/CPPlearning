// Unwanted_words.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>



int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Инициализация переменных
	vector<string> words;
	string temp;
	string diliked = "брокколи";

	//Ввод данных
	cout << "Введите несколько слов:" << endl;
	while (cin >> temp)
	{
		if (temp == "|")
		{
			break;
		}
		if (temp == diliked)
		{
			temp = "БИП";
		}
		words.push_back(" " + temp + " ");
	}

	for (int i = 0; i <= words.size() - 1; ++i)
	{
		cout << words[i];
	}

	cout << "\nPress any key...";
	cin >> temp;


    return 0;
}

