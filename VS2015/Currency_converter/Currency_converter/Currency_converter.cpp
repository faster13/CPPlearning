// Currency_converter.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <windows.h>


int main()
{
	using namespace std;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	//������������� ����������
	double sum_cur = 0; //����� � ������
	double dollar_rate = 69.08; //����� � �����
	double euro_rate = 77.13;
	double funt_rate = 105.55;
	double yuan_rate = 10.85;
	double krone_rate = 2.85;

	char currency = 'n'; //��� ������: d - �������, e - ����, f - �����.

	//���� ������
	cout << "������� ����� � ������ � ��� ������ (d - ������, e - ����, f - ����, k - �����, y - ����): ";
	cin >> sum_cur >> currency;

	//���������� OLD
	//if (currency == 'd')
	//{
	//	cout << sum_cur << " �������� = " << (sum_cur * dollar_rate) << " ���." << endl;
	//}
	//else if (currency == 'e')
	//{
	//	cout << sum_cur << " ���� = " << (sum_cur * euro_rate) << " ���." << endl;
	//}
	//else if (currency == 'f')
	//{
	//	cout << sum_cur << " ������ = " << (sum_cur * euro_rate) << " ���." << endl;
	//}
	//else
	//{
	//	cout << "����������� ��� ������." << endl;
	//}

	//����� ����������
	switch (currency)
	{
	case 'd':
		cout << sum_cur << " �������� = " << (sum_cur * dollar_rate) << " ���." << endl;
		break;
	case 'e':
		cout << sum_cur << " ���� = " << (sum_cur * euro_rate) << " ���." << endl;
		break;
	case 'f':
		cout << sum_cur << " ������ = " << (sum_cur * euro_rate) << " ���." << endl;
		break;
	case 'y':
		cout << sum_cur << " ����� = " << (sum_cur * yuan_rate) << " ���." << endl;
		break;
	case 'k':
		cout << sum_cur << " ���� = " << (sum_cur * krone_rate) << " ���." << endl;
		break;
	default:
		cout << "����������� ��� ������." << endl;
		break;
	}


	//Any key
	cout << "Press any key..." << endl;
	cin >> currency;

    return 0;
}

