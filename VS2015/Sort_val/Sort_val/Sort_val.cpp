// Sort_val.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	int val1 = 0, val2 = 0, val3 = 0, val_tmp = 0;
	string vals1 = " ", vals2 = " ", vals3 = " ", vals_tmp = " ";

	//���� �������� ������
	cout << "������� ��� ����� ����� ������: ";
	cin >> val1 >> val2 >> val3;


	//���������� ������� "��������"
	if (val2 < val1)
	{
		val_tmp = val1;
		val1 = val2;
		val2 = val_tmp;
	}
	if (val3 < val2)
	{
		val_tmp = val2;
		val2 = val3;
		val3 = val_tmp;
	}
	if (val2 < val1)
	{
		val_tmp = val1;
		val1 = val2;
		val2 = val_tmp;
	}

	//����� ����������
	cout << "������ ������������� � ��������� �������: " << val1 << " " << val2 << " " << val3 << endl;

	//���� ��������� ������
	cout << "������ ������� ��� ����� ����� ������: ";
	std::cin >> vals1 >> vals2 >> vals3;

	//����������
	if (vals2 < vals1)
	{
		vals_tmp = vals1;
		vals1 = vals2;
		vals2 = vals_tmp;
	}
	if (vals3 < vals2)
	{
		vals_tmp = vals2;
		vals2 = vals3;
		vals3 = vals_tmp;
	}
	if (vals2 < vals1)
	{
		vals_tmp = vals1;
		vals1 = vals2;
		vals2 = vals_tmp;
	}

	//����� ����������
	cout << "������ �������������: " << vals1 << " " << vals2 << " " << vals3 << endl;
	


	//�����
	cout << "������� ����� �������..." << endl;
	cin >> val_tmp;
	

    return 0;
}

