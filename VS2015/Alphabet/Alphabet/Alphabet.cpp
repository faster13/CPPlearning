// Alphabet.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>

int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Инициализация переменных
	int uppercase = 'A';
	int lowercase = 'a';

	//Вычисления
	//while (letter <= 'z')
	//{
	//	cout << letter << " - " << int(letter) << endl;
	//	++letter;
	//}

	for (uppercase; uppercase <= 'Z'; ++uppercase)
	{
		cout << char(uppercase) << " - " << uppercase << endl;
	}
	for (lowercase; lowercase <= 'z'; ++lowercase)
	{
		cout << char(lowercase) << " - " << lowercase << endl;
	}

	cout << "Press any key...";
	cin >> uppercase;

    return 0;
}

