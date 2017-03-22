// Stone_scissor_paper.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Камень -1, ножниы - 2, бумага - 3.
	vector<int> rnd_move(5);
	int cu = 0;
	int cc = 0;
	int i = 0;
	string user = "";
	string comp = "";
	char figure = ' ';

	rnd_move[0] = 3;
	rnd_move[1] = 1;
	rnd_move[2] = 2;
	rnd_move[3] = 3;
	rnd_move[4] = 1;

	cout << "Камень, ножницы, бумага (к, н , б)?" << endl;

	while (cin >> figure)
	{
		switch (figure)
		{
		case 'к':
			cu = 1;
			user = "камень";
			break;
		case 'н':
			cu = 2;
			user = "ножницы";
			break;
		case 'б':
			cu = 3;
			user = "бумага";
			break;
		default:
			cu = 0;
			cout << "Введено неверное значение!" << endl;
			break;
		}
		if (i <= 4)
		{
			cc = rnd_move[i];
		}
		else
		{
			i = 0;
		}

		switch (cc)
		{
		case 1:
			comp = "камень";
			break;
		case 2:
			comp = "ножницы";
			break;
		case 3:
			comp = "бумага";
			break;
		}

		cout << "Вы: " << user << " | Компьютер: " << comp << " - ";

		if ((cu == 1 && cc == 3) || (cu == 2 && cc == 1) || (cu == 3 && cc == 2))
		{
			cout << "Вы проиграли!" << endl;
		}
		else if ((cu == 3 && cc == 1) || (cu == 1 && cc == 2) || (cu == 2 && cc == 3))
		{
			cout << "Вы Выиграли!" << endl;
		}
		else
		{
			cout << "Ничья!" << endl;
		}
		++i;
	}

    return 0;
}

