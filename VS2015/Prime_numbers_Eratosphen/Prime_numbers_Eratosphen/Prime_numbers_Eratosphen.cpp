// Prime_numbers_Eratosphen.cpp: ���������� ����� ����� ��� ����������� ����������.
//����� ������� ����� �� ��������� ����������

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
	int p = 2;
	int max = 0;
	int c = 2;

	//���� �����
	cout << "@������ ����������@" << endl;
	cout << "������� ������� ������� ������ ������� �����: ";
	cin >> max;
	//��������� ������ �������
	for (int i = 0; i <= max; ++i)
	{
		primes.push_back(i);
	}

	//����������
	for (int j = p; j < primes.size(); ++j)
	{
		if (primes[j] != 0 && primes[j] >= 2)
		{
			p = primes[j];
			while (c * p < primes.size())
			{
				primes[c * p] = 0;
				++c;
			}
			c = 2;
		}
	}

	for (int i = 0; i < primes.size(); ++i)
	{
		if (primes[i] != 0 && primes[i] >= 2)
		{
			cout << primes[i] << " ";
		}
	}

	cout << endl;
	system("pause");

    return 0;
}

