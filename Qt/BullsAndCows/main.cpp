/*
 * main.cpp
 *
 *  �������: 29 ���. 2016 �.
 *      �����: ���������� �.�.
 *      ���� "���� � ������"
 *
 *      �������:
 *      ��������� ���������� ��������� 4-� ������� �����. ������������ ������������ ������� ��� �����.
 *      ������:
 *      ��������� ������������ ����� 1398, ������������ ��� 1536.
 *      ��������� ��������� "1 ��� � 1 ������", �.�. ������������ ������ ����� 1 �� ���������� ������� � ����� 3 ��
 *      ������������.
 */

#include <iostream>
#include <vector>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main ()
{
    vector<int> magicnum;
    vector<int> usernum;
    int rnd;
    //int guess_num = 0;
    int user_num = 0;
    int bulls = 0;
    int cows = 0;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "������ ��������� �������� ������������� �����. ��� ���������� ��� �������!" << endl;
    cout << "���� �� �������� ����� � � ������� � ����� ��� ����� 1 ���. ���� �������� �����, �� �� �������� ������� ��� ����� 1 ������." << endl;
    cout << "���� ����������, ����� ����� ����� 4." << endl;

    cout << "��������� ������� �����. �������� ������!" << endl;

    srand(time(NULL));

    for (int i = 0; i <= 3; ++i)
    {
        rnd = rand() % 9 + 1;
        magicnum.push_back(rnd);
        cout << rnd << " ";
    }

    while (bulls < 4)
    {
        cout << "������� �����: ";
        usernum.clear();
        while (cin >> user_num)
        {
            usernum.push_back(user_num);
            if (usernum.size() == 4) break;
        }
        for (int i = 0; i < 4; ++i)
        {
            if (magicnum[i] == usernum[i])
            {
                ++bulls;
                magicnum[i] = -1;
            }
            else
            {
                for (int j = 0; j < 4; ++j)
                {
                    if (magicnum[i] == usernum[j]) ++cows;
                }
            }
        }
        cout << bulls << " ���."  << cows << " ���." << endl;
        cows = 0;
    }

    return 0;
}
