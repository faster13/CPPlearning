// Even_odd_number.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>


int main()
{
	using namespace std;

	//��������� �������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	int number = 0;

	//���� ������
	cout << "������� ����� � �������� Enter: ";
	cin >> number;

	//������� � �����
	if (number % 2 == 0)
	{
		cout << "����� " << number << " �������� ������." << endl;
	}
	else
	{
		cout << "����� " << number << " �������� ��������." << endl;
	}
	
	cout << "������� ����� �������...";
	cin >> number;


    return 0;
}

