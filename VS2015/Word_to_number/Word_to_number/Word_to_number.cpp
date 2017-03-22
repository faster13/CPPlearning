// Word_to_number.cpp: определяет точку входа для консольного приложения.
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
	string word_num = "";
	//int number = 0;

	//Ввод данных
	cout << "Введите число в виде слова: ";
	cin >> word_num;

	//Рассчёт
	if (word_num == "ноль")
	{
		cout << "Вы ввели число 0" << endl;
	}
	if (word_num == "один")
	{
		cout << "Вы ввели число 1" << endl;
	}
	if (word_num == "два")
	{
		cout << "Вы ввели число 2" << endl;
	}
	if (word_num == "три")
	{
		cout << "Вы ввели число 3" << endl;
	}
	if (word_num == "четыре")
	{
		cout << "Вы ввели число 4" << endl;
	}
	if (word_num == "глупый компьютер!")
	{
		cout << "Я не знаю такого числа!" << endl;
	}

	cout << "Нажмите любую клавишу...";
	cin >> word_num;

    return 0;
}

