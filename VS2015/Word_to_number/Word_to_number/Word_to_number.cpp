// Word_to_number.cpp: ���������� ����� ����� ��� ����������� ����������.
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
	string word_num = "";
	//int number = 0;

	//���� ������
	cout << "������� ����� � ���� �����: ";
	cin >> word_num;

	//�������
	if (word_num == "����")
	{
		cout << "�� ����� ����� 0" << endl;
	}
	if (word_num == "����")
	{
		cout << "�� ����� ����� 1" << endl;
	}
	if (word_num == "���")
	{
		cout << "�� ����� ����� 2" << endl;
	}
	if (word_num == "���")
	{
		cout << "�� ����� ����� 3" << endl;
	}
	if (word_num == "������")
	{
		cout << "�� ����� ����� 4" << endl;
	}
	if (word_num == "������ ���������!")
	{
		cout << "� �� ���� ������ �����!" << endl;
	}

	cout << "������� ����� �������...";
	cin >> word_num;

    return 0;
}

