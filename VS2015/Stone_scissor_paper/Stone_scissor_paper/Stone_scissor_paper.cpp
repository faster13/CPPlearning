// Stone_scissor_paper.cpp: ���������� ����� ����� ��� ����������� ����������.
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

	// ������ -1, ������ - 2, ������ - 3.
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

	cout << "������, �������, ������ (�, � , �)?" << endl;

	while (cin >> figure)
	{
		switch (figure)
		{
		case '�':
			cu = 1;
			user = "������";
			break;
		case '�':
			cu = 2;
			user = "�������";
			break;
		case '�':
			cu = 3;
			user = "������";
			break;
		default:
			cu = 0;
			cout << "������� �������� ��������!" << endl;
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
			comp = "������";
			break;
		case 2:
			comp = "�������";
			break;
		case 3:
			comp = "������";
			break;
		}

		cout << "��: " << user << " | ���������: " << comp << " - ";

		if ((cu == 1 && cc == 3) || (cu == 2 && cc == 1) || (cu == 3 && cc == 2))
		{
			cout << "�� ���������!" << endl;
		}
		else if ((cu == 3 && cc == 1) || (cu == 1 && cc == 2) || (cu == 2 && cc == 3))
		{
			cout << "�� ��������!" << endl;
		}
		else
		{
			cout << "�����!" << endl;
		}
		++i;
	}

    return 0;
}

