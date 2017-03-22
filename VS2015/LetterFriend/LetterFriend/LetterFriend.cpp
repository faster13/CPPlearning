// LetterFriend.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <locale>
#include <Windows.h>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string friend_name = "friend";
	string common_friend = "common friend";
	int friend_age = 0;
	char common_sex = '?';
	
	//���� ������
	cout << "������� ��� �����: ";
	cin >> friend_name;
	cout << "������� ������� �����: ";
	cin >> friend_age;
	cout << "������� ��� ������ ���������: ";
	cin >> common_friend;
	cout << "������� ��� ������ ��������� (�|�): ";
	cin >> common_sex;

	//������
	cout << "\n������\n\n" << "������� " << friend_name << "! ��� � ���� ����. � ���� �� ������. ��� ���������� �����������.\n";
	cout << "����� �� �� " << common_friend << " �������?\n";
	if (common_sex == '�')
	{
		cout << "���� �� ������� " << common_friend << ", ����������, ������� ��� ��������� ���.\n";
	}
	if (common_sex == '�') 
	{
		cout << "���� �� ������� " << common_friend << ", ����������, ������� � ��������� ���.\n";
	}
	if (friend_age <= 0 || friend_age >= 110)
	{
		cout << "������� ����� ��� �������)))\n";
	}
	else
	{
		cout << "� ������, �� ������� ������� ���� �������� � ���� ����������� " << friend_age << " ���.\n";
	}
	if (friend_age < 12)
	{
		cout << "���� �� ��������� ��� ���������� " << friend_age + 1 << " ���.\n";
	}
	if (friend_age == 18)
	{
		cout << "�� ��������� ��� �� ������� ����������.\n";
	}
	if (friend_age > 60)
	{
		cout << "� �������, ��� �� �� �������� �� ������.\n";
	}
	cout << "�������� ���� ����.\n";
	cout << "������� ����� �������...\n";
	cin >> friend_age;
    return 0;
}

