// Simple_calc.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	double num1 = 0;
	double num2 = 0;
	double result = 0;
	char operation = ' ';

	cout << "������� ����� ������ ��� ����� � ���� �������� (+ - / * %):" << endl;

	while (cin >> num1 >> num2 >> operation)
	{
		switch (operation)
		{
		case '+':
			cout << "����� " << num1 << " � " << num2 << " ����� " << (num1 + num2) << endl;
			break;
		case '-':
			cout << "�������� " << num1 << " � " << num2 << " ����� " << (num1 - num2) << endl;
			break;
		case '*':
			cout << "������������ " << num1 << " � " << num2 << " ����� " << (num1 * num2) << endl;
			break;
		case '/':
			cout << "������� " << num1 << " � " << num2 << " ����� " << (num1 + num2) << endl;
			break;
		case '%':
			cout << "������� ������� " << num1 << " �� " << num2 << " ����� " << (num1 + num2) << endl;
			break;
		}
	}


    return 0;
}

