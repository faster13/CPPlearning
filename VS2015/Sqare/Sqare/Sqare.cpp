// Sqare.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>


int main()
{
	using namespace std;
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	long x = 0;
	long tmp = 0;
	long degree = 0;
	long result = 0;

	cout << "¬ведите число и степень: ";
	cin >> x >> degree;

	cout << x << "^0 = 1" << endl;
	cout << x << "^1 = " << x << endl;
	result = x;

	for (int i = 2; i <= degree; ++i)
	{
		
		for (int n = 1; n <= x; ++n)
		{
			tmp += result;
		}
		result = tmp;
		cout << x << "^" << i << " = " << tmp << endl;
		tmp = 0;
	}


	cout << "Press any key...";
	cin >> x;

    return 0;
}

