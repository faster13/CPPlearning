/*
 * main.cpp
 *
 *  Создано: 29 янв. 2016 г.
 *      Автор: Дамашкевич В.Н.
 *      Игра "Быки и коровы"
 *
 *      Правила:
 *      Компьютер генерирует случайное 4-х значное число. Пользователю предлагается угадать это число.
 *      Пример:
 *      Компьютер сгенерировал число 1398, пользователь ввёл 1536.
 *      Выводится сообщение "1 бык и 1 корова", т.к. пользователь угадал число 1 на правильной позиции и число 3 на
 *      неправильной.
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

    cout << "Сейчас компьютер загадает четырёхзначное число. Вам необходимо его угадать!" << endl;
    cout << "Если Вы угадаете цифру и её позицию в числе это будет 1 бык. Если угадаете число, но не угадаете позицию это будет 1 корова." << endl;
    cout << "Игра завершится, когда быков будет 4." << endl;

    cout << "Компьютер загадал число. Попробуй угадай!" << endl;

    srand(time(NULL));

    for (int i = 0; i <= 3; ++i)
    {
        rnd = rand() % 9 + 1;
        magicnum.push_back(rnd);
        cout << rnd << " ";
    }

    while (bulls < 4)
    {
        cout << "Введите число: ";
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
        cout << bulls << " бык."  << cows << " кор." << endl;
        cows = 0;
    }

    return 0;
}
