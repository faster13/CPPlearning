// Numbers.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>



int main()
{
	//��������� ���������
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//������������� ����������
	int val1 = 0;
	int val2 = 0;
	char any_key = ' ';

	//���� ������
	cout << "������� ���������� A: ";
	cin >> val1;
	cout << "������� ���������� B: ";
	cin >> val2;

	//����������
	if (val1 > val2)
	{
		cout << "A > B" << endl;
	}
	else
	{
		cout << "A < B" << endl;
	}
	if (val1 == val2)
	{
		cout << "A = B";
	}

	cout << "A + B = " << (val1 + val2) << endl;
	cout << "A - B = " << (val1 - val2) << endl;
	cout << "A * B = " << (val1 * val2) << endl;
	cout << "A : B = " << (val1 / val2) << endl;

	cout << "������ ����� �������..." << endl;
	cin >> any_key;
    return 0;
}

