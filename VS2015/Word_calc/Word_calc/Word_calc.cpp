// Word_calc.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <windows.h>


int main()
{
	using namespace std;

	//��������� �������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	string operation = "";
	double num1 = 0, num2 = 0;

	//���� ������
	cout << "������� �������� (+, -, *, /, ����, �����, ��������, ���������) � ��� ����� ����� ������:" << endl;
	cin >> operation >> num1 >> num2;

	//���
	if (operation == "+" || operation == "����")
	{
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	}
	if (operation == "-" || operation == "�����")
	{
		cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
	}
	if (operation == "*" || operation == "��������")
	{
		cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
	}
	if (operation == "/" || operation == "���������")
	{
		cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
	}


	cout << "������� ����� �������..." << endl;
	cin >> operation;

    return 0;
}

