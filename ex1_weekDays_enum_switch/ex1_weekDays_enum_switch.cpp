#include "pch.h"
#include <iostream>

using namespace std;


int main()
{
	setlocale(LC_ALL, "ru");
	int numberDay;
	enum Days { monday = 1, tuesday, wednesday, thursday, friday, saturday, sunday };
	cout << "Введите номер дня недели: ";
	cin >> numberDay;
	cout << "\n";
	if (numberDay == 0)
	{
		cout << "Ошибка! Вы ввели неправильный номер дня! В неделе 7 дней\n" << endl;
		cout << "Введите номер дня недели c 1 (единицы): ";
		cin >> numberDay;
		cout << "\n";
	}
	while (numberDay)
	{
		switch (numberDay)
		{
		case monday:
			cout << "Вы выбрали ПОНЕДЕЛЬНИК\n" << endl;
			break;
		case tuesday:
			cout << "Вы выбрали ВТОРНИК\n" << endl;
			break;
		case wednesday:
			cout << "Вы выбрали СРЕДА\n" << endl;
			break;
		case thursday:
			cout << "Вы выбрали ЧЕТВЕРГ\n" << endl;
			break;
		case friday:
			cout << "Вы выбрали ПЯТНИЦА\n" << endl;
			break;
		case saturday:
			cout << "Вы выбрали СУББОТА\n" << endl;
			break;
		case sunday:
			cout << "Вы выбрали ВОСКРЕСЕНЬЕ\n" << endl;
			break;
		default:
			cout << "Ошибка! Вы ввели неправильный номер дня! В неделе 7 дней\n" << endl;
			break;
		}
		cout << "Введите номер дня недели: ";
		cin >> numberDay;
		cout << "\n";
		if (numberDay == 0)
		{
			cout << "Ошибка! Вы ввели неправильный номер дня! В неделе 7 дней\n" << endl;
			cout << "Введите номер дня недели c 1 (единицы): ";
			cin >> numberDay;
			cout << "\n";
		}
	}
	
	system("pause");
	return 0;
}
