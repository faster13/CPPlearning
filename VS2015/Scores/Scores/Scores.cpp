// Scores.cpp: определяет точку входа для консольного приложения.
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
	vector<string> names;
	vector<string> scores;
	string word1, word2;

	//Ввод данных
	cout << "Вводите имена и оценку через пробел (для прекращения ввода наберите С Т):" << endl;
	while ((cin >> word1 >> word2) && word1 != "С" && word2 != "Т")
	{
		if (names.size() > 0)
		{
			for (int i = 0; i < names.size(); ++i)
			{
				if (word1 == names[i])
				{
					cout << "Имя " << word1 << " вводилось ранее. Введите неповторяющееся имя." << endl;
					word1 = "";
				}
			}
			if (word1 != "")
			{
				names.push_back(word1);
				scores.push_back(word2);
			}
		}
		else
		{
			names.push_back(word1);
			scores.push_back(word2);
		}
	}

	//for (int c = 0; c < names.size(); ++c)
	//{
	//	cout << names[c] << " - " << scores[c] << endl;
	//}
	cout << endl;
	cout << "Ввод завершён." << endl;
	cout << "Для поиска введите имя или баллы (для окончания введите СТОП): ";
	
	while ((cin >> word1) && word1 != "СТОП")
	{
		for (int c = 0; c < names.size(); ++c)
		{
			if (names[c] == word1 || scores[c] == word1)
			{
				cout << names[c] << " - " << scores[c] << endl;
				word2 = "OK";
			}
		}
		if (word2 != "OK")
		{
			cout << "Данные не найдены." << endl;
			word2 = "";
		}
		cout << "Для поиска введите имя или баллы (для окончания введите СТОП): ";
	}

	system("pause");
	
    return 0;
}

