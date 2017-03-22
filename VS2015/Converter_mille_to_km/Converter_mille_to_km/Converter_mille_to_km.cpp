// Converter_mille_to_km.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>

int main()
{
	using namespace std;
	//Локализация вводв/вывода
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//Переменные
	float milles = 0;
	float km = 0;

	//Интерфейс
	cout << "Введите расстояние в милях: ";
	cin >> milles;
	cout << milles << " милль = " << (km = milles * 1.61) << " км\n";
	cout << "Нажмите любую клавишу...";
	cin >> milles;
    return 0;
}

