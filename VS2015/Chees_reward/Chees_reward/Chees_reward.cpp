// Chees_reward.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int grains = 2;
	int sum = 3; 
	//vector<int> reward(64, 0);

	cout << "№ клетки\tЗёрен на клетке\t\t\tВсего зёрен" << endl;


	for (int i = 3; i <= 64; ++i)
	{
		grains *= 2;
		sum += grains;
		if (sum >= 1000 && sum < 2000) cout << i << "\t\t" << grains << "\t\t\t\t" << sum << endl;
		if (sum >= 1000000 && sum < 2000000) cout << i << "\t\t" << grains << "\t\t\t\t" << sum << endl;
		if (sum >= 1000000000 && sum < 2000000000) cout << i << "\t\t" << grains << "\t\t\t" << sum << endl;
	}

	system("pause");

    return 0;
}

