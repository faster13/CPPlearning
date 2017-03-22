// LetterFriend.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <locale>
#include <Windows.h>


int main()
{
	using namespace std;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string friend_name = "friend";
	string common_friend = "common friend";
	int friend_age = 0;
	char common_sex = '?';
	
	//Ввод данных
	cout << "Введите имя друга: ";
	cin >> friend_name;
	cout << "Введите возраст друга: ";
	cin >> friend_age;
	cout << "Введите имя общего знакомого: ";
	cin >> common_friend;
	cout << "Введите пол общего знакомого (м|ж): ";
	cin >> common_sex;

	//Письмо
	cout << "\nПисьмо\n\n" << "Дорогой " << friend_name << "! Как у тебя дела. У меня всё хорошо. Нам необходимо встретиться.\n";
	cout << "Видел ли ты " << common_friend << " недавно?\n";
	if (common_sex == 'м')
	{
		cout << "Если ты увидишь " << common_friend << ", пожалуйста, попроси его позвонить мне.\n";
	}
	if (common_sex == 'ж') 
	{
		cout << "Если ты увидишь " << common_friend << ", пожалуйста, попроси её позвонить мне.\n";
	}
	if (friend_age <= 0 || friend_age >= 110)
	{
		cout << "Хорошая шутка про возраст)))\n";
	}
	else
	{
		cout << "Я слышал, ты недавно отметил день рождения и тебе исполнилось " << friend_age << " лет.\n";
	}
	if (friend_age < 12)
	{
		cout << "Тебе на следующий год исполнится " << friend_age + 1 << " лет.\n";
	}
	if (friend_age == 18)
	{
		cout << "На следующий год ты смлжешь голосовать.\n";
	}
	if (friend_age > 60)
	{
		cout << "Я надеюсь, что ты не скучаешь на пенсии.\n";
	}
	cout << "Искренне твой Влад.\n";
	cout << "Нажмите любую клавишу...\n";
	cin >> friend_age;
    return 0;
}

