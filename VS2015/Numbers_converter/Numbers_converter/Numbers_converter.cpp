// Converter_bumbers.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	vector<string> words(10);
	words[0] = "����";
	words[1] = "����";
	words[2] = "���";
	words[3] = "���";
	words[4] = "������";
	words[5] = "����";
	words[6] = "�����";
	words[7] = "����";
	words[8] = "������";
	words[9] = "������";
	string number;

	cout << "������� ����� �� 1 �� 9 �������� (����.: ����):" << endl;

	while (cin >> number)
	{
		for (int i = 0; i < words.size(); ++i)
		{
			if (number == words[i]) cout << i << endl;
		}
	}

	system("pause");

	return 0;
}

