// Converter_mille_to_km.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <windows.h>
#include <iostream>

int main()
{
	using namespace std;
	//����������� �����/������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//����������
	float milles = 0;
	float km = 0;

	//���������
	cout << "������� ���������� � �����: ";
	cin >> milles;
	cout << milles << " ����� = " << (km = milles * 1.61) << " ��\n";
	cout << "������� ����� �������...";
	cin >> milles;
    return 0;
}

