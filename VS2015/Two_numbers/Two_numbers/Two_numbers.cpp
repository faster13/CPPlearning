// Two_numbers.cpp: определяет точку входа для консольного приложения.
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

	//Инициализация переменных
	vector<double> nums;
	double max = 0, min = 0;
	double sum = 0;
	double temp;

	cout << "Введите два числа (конец ввода - |): " << endl;

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
			cout << "Наименьшее из введённых значений." << endl;
		}
		else if (temp > max)
		{
			max = temp;
			cout << "Наибольшее из введённых значений." << endl;
		}
		sum += temp;
		nums.push_back(temp);
	}

	for (int i = 0; i <= nums.size() - 1; ++i)
	{
		cout << (i + 1) << "-е чило: " << nums[i] << endl;
	}
	
	sort(nums.begin(), nums.end());


	cout << "Наименьшее число: " << min << "\nНаибольшее число: " << max << endl;
	cout << "Введено " << nums.size() << " чисел." << endl;
	cout << "Сумма = " << sum << endl;


	//if (nums[0] == nums[1])
	//{
	//	cout << "Числа равны.";
	//}
	//else
	//{
	//	cout << "Наименьшее из двух значений равно: ";

	//	for (int i = 0; i <= nums.size() - 1; ++i)
	//	{
	//		cout << nums[i] << " ";
	//	}
	//	if (nums[1] - nums[0] < 0.9)
	//	{
	//		cout << "\nЧисла " << nums[0] << " и " << nums[1] << " почти равны";
	//	}
	//}



	cout << endl;
	system("pause");


    return 0;
}

