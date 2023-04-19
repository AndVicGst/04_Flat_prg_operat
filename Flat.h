#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

class Flat
{
private:
	int s;
	int price;
	int number;           //номер квартиры
public:
	Flat() : s{ 0 }, price{ 0 }, number{0} {}
	Flat(int s_a, int pr_a, int num) : s{ s_a }, price{ pr_a }, number{num} {}
	void printF();
	friend void operator == (const Flat fl1, const Flat fl2) {
		if (fl1.s == fl2.s) cout << "Площади квартир №" << fl1.number << " и №" << fl2.number << " равны" << endl;
		else cout << "Площади квартир №" << fl1.number << " и №" << fl2.number << " не равны" << endl;
	}
	friend void operator > (const Flat fl1, const Flat fl2) {
		if (fl1.price > fl2.price) cout << "Цена квартиры №" << fl1.number << " больше цены квартиры №" << fl2.number << endl;
		else cout << "Цена квартиры №" << fl1.number << " меньше цены квартиры №" << fl2.number << endl;
	}
	Flat& operator = (const Flat& fl) {
		if (this == &fl) return *this;
		s = fl.s;
		price = fl.price;
		return *this;
	}
};

