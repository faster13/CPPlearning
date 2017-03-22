/*
 * main.cpp
 *
 *  Created on: 28 янв. 2016 г.
 *      Author: damas
 */
#include <iostream>
#include <Windows.h>
#include <vector>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    vector<int> fib;
    int f = 0;

    fib.push_back(0);
    fib.push_back(1);

    for (int i = 2; i <= 100; ++i)
    {
        f = fib[i - 1] + fib[i - 2];
        fib.push_back(f);
    }

    cout << "Последовательность Фибоначчи: ";

    for (int i = 0; i < fib.size(); ++i)
    {
        cout << fib[i] << " ";
    }
}
