// Quadratic_equation.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <Windows.h>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	double a = 0, b = 0, c = 0;
	double x1 = 0, x2 = 0;
	double dscr = 0;

	//���� ������
	cout << "��������� ��������� ���������� ��������� ax^2 + bx + c = 0" << endl;
	cout << "������ ���������� a, b, c ����� ������: ";
	cin >> a >> b >> c;

	//����������
	dscr = pow(b, 2) - (4 * a * c);

	if (dscr > 0)
	{
		cout << "��������� ����� ��� �����: ";
		x1 = (-b + sqrt(dscr)) / (2 * a);
		x2 = (-b - sqrt(dscr)) / (2 * a);
		cout << "x1 = " << x1 << " � x2= " << x2 << endl;
	}
	else if (dscr = 0)
	{
		cout << "���������� ����� ���� ������: ";
		x1 = -b / (2 * a);
		cout << "x = " << x1 << endl;
	}
	else
	{
		cout << "��������� �� ����� ������" << endl;
	}

	system("pause");

    return 0;
}

