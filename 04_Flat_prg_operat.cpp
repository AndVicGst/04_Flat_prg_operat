﻿/*
Создать класс Flat (квартира).
Реализовать перегруженные операторы:
1.  Проверка на равенство площадей квартир (операция
==);
2.  Операцию присваивания одного объекта в другой
(операция =);
3.  Сравнение двух квартир по цене (операция>).
*/

#include "Flat.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "-----------Сравнение квартир-----------" << endl << endl;
	Flat f1(100, 1000000, 1);    //первая квартира
	Flat f2(150, 2000000, 2);    //вторая квартира
	Flat f3(0, 0, 3);            //обьект для присваивания

	f1.printF();
	f2.printF();
	f3.printF();

	f1 == f2;
	f1 > f2;
	f3 = f1;     // 3 кв - присваиваем данные 1 кв
	cout << endl;
	f3.printF();

	f2 > f3;
	cout << endl;

	f1 = f2;    // 1 кв - присваиваем данные 2 кв
	f1.printF();

	cout << endl;
	system("pause");
	return 0;
}
