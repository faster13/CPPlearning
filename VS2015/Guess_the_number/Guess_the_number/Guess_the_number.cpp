// Guess_thr_number.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	int min = 1;
	int max = 100;
	int average = 0;
	char answer = ' ';
	int result = 0;

	//���� ������
	cout << "��������� ����� �� 1 �� 100." << endl;
	average = max / 2;

	while (result == 0)
	{
		cout << "���� ����� < " << average << "? (�/�): ";
		cin >> answer;

		if (answer == '�')
		{
			max = average;
			average = min + (max - min) / 2;
			//cout << min << " " << max << " " << average << endl;
		}
		else if (answer == '�')
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

	cout << "�� �������� ����� " << result << endl;
	system("pause");

	return 0;
}

