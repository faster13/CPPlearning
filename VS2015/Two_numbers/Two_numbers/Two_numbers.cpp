// Two_numbers.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//������������� ����������
	vector<double> nums;
	double max = 0, min = 0;
	double sum = 0;
	double temp;

	cout << "������� ��� ����� (����� ����� - |): " << endl;

	while (cin >> temp)
	{
		if (temp == (double)'|') { break; }
		if (nums.size() == 0)
		{
			min = temp;
			max = temp;
		}
		else if (temp < min)
		{
			min = temp;
			cout << "���������� �� �������� ��������." << endl;
		}
		else if (temp > max)
		{
			max = temp;
			cout << "���������� �� �������� ��������." << endl;
		}
		sum += temp;
		nums.push_back(temp);
	}

	for (int i = 0; i <= nums.size() - 1; ++i)
	{
		cout << (i + 1) << "-� ����: " << nums[i] << endl;
	}
	
	sort(nums.begin(), nums.end());


	cout << "���������� �����: " << min << "\n���������� �����: " << max << endl;
	cout << "������� " << nums.size() << " �����." << endl;
	cout << "����� = " << sum << endl;


	//if (nums[0] == nums[1])
	//{
	//	cout << "����� �����.";
	//}
	//else
	//{
	//	cout << "���������� �� ���� �������� �����: ";

	//	for (int i = 0; i <= nums.size() - 1; ++i)
	//	{
	//		cout << nums[i] << " ";
	//	}
	//	if (nums[1] - nums[0] < 0.9)
	//	{
	//		cout << "\n����� " << nums[0] << " � " << nums[1] << " ����� �����";
	//	}
	//}



	cout << endl;
	system("pause");


    return 0;
}

