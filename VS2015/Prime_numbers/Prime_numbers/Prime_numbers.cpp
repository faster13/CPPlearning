// Prime_numbers.cpp: ���������� ����� ����� ��� ����������� ����������.
// �������� ������� ��� ������� ����� �� 1 �� 100

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <Windows.h>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	vector<int> primes;
	int max = 0;
	int tmp = 0;


	cout << "������� ������� ������� ��� ������ ������� �����: ";
	cin >> max;
	//����������
	for (int i = 2; i <= max; ++i)
	{
		for (int j = 2; j < i; ++j)
		{
			if (i % j == 0)
			{
				tmp = 1;
			}
		}
		if (tmp != 1)
		{
			primes.push_back(i);
		}
		else
		{
			tmp = 0;
		}
	}

	cout << "������� ����� �� 1 �� " << max << ":" << endl;

	for (int i = 0; i < primes.size(); ++i)
	{
		cout << primes[i] << " ";
	}
	cout << endl;
	system("pause");


    return 0;
}

