// Scores.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	vector<string> names;
	vector<string> scores;
	string word1, word2;

	//���� ������
	cout << "������� ����� � ������ ����� ������ (��� ����������� ����� �������� � �):" << endl;
	while ((cin >> word1 >> word2) && word1 != "�" && word2 != "�")
	{
		if (names.size() > 0)
		{
			for (int i = 0; i < names.size(); ++i)
			{
				if (word1 == names[i])
				{
					cout << "��� " << word1 << " ��������� �����. ������� ��������������� ���." << endl;
					word1 = "";
				}
			}
			if (word1 != "")
			{
				names.push_back(word1);
				scores.push_back(word2);
			}
		}
		else
		{
			names.push_back(word1);
			scores.push_back(word2);
		}
	}

	//for (int c = 0; c < names.size(); ++c)
	//{
	//	cout << names[c] << " - " << scores[c] << endl;
	//}
	cout << endl;
	cout << "���� ��������." << endl;
	cout << "��� ������ ������� ��� ��� ����� (��� ��������� ������� ����): ";
	
	while ((cin >> word1) && word1 != "����")
	{
		for (int c = 0; c < names.size(); ++c)
		{
			if (names[c] == word1 || scores[c] == word1)
			{
				cout << names[c] << " - " << scores[c] << endl;
				word2 = "OK";
			}
		}
		if (word2 != "OK")
		{
			cout << "������ �� �������." << endl;
			word2 = "";
		}
		cout << "��� ������ ������� ��� ��� ����� (��� ��������� ������� ����): ";
	}

	system("pause");
	
    return 0;
}

