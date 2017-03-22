// Currency_converter.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


int main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	//Инициалтзация переменных
	double sum_cur = 0; //Сумма в валюте
	double dollar_rate = 69.08; //Сумма в рубях
	double euro_rate = 77.13;
	double funt_rate = 105.55;
	double yuan_rate = 10.85;
	double krone_rate = 2.85;

	char currency = 'n'; //Тип валюты: d - доллары, e - евро, f - фунты.

	//Ввод данных
	cout << "Введите сумму в валюте и код валюты (d - доллар, e - евро, f - фунт, k - крона, y - юань): ";
	cin >> sum_cur >> currency;

	//Вычисления OLD
	//if (currency == 'd')
	//{
	//	cout << sum_cur << " долларов = " << (sum_cur * dollar_rate) << " руб." << endl;
	//}
	//else if (currency == 'e')
	//{
	//	cout << sum_cur << " евро = " << (sum_cur * euro_rate) << " руб." << endl;
	//}
	//else if (currency == 'f')
	//{
	//	cout << sum_cur << " фунтов = " << (sum_cur * euro_rate) << " руб." << endl;
	//}
	//else
	//{
	//	cout << "Неизвестный код валюты." << endl;
	//}

	//Новые вычисления
	switch (currency)
	{
	case 'd':
		cout << sum_cur << " долларов = " << (sum_cur * dollar_rate) << " руб." << endl;
		break;
	case 'e':
		cout << sum_cur << " евро = " << (sum_cur * euro_rate) << " руб." << endl;
		break;
	case 'f':
		cout << sum_cur << " фунтов = " << (sum_cur * euro_rate) << " руб." << endl;
		break;
	case 'y':
		cout << sum_cur << " юаней = " << (sum_cur * yuan_rate) << " руб." << endl;
		break;
	case 'k':
		cout << sum_cur << " крон = " << (sum_cur * krone_rate) << " руб." << endl;
		break;
	default:
		cout << "Неизвестный код валюты." << endl;
		break;
	}


	//Any key
	cout << "Press any key..." << endl;
	cin >> currency;

    return 0;
}

