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
	int number;           //����� ��������
public:
	Flat() : s{ 0 }, price{ 0 }, number{0} {}
	Flat(int s_a, int pr_a, int num) : s{ s_a }, price{ pr_a }, number{num} {}
	void printF();
	friend void operator == (const Flat fl1, const Flat fl2) {
		if (fl1.s == fl2.s) cout << "������� ������� �" << fl1.number << " � �" << fl2.number << " �����" << endl;
		else cout << "������� ������� �" << fl1.number << " � �" << fl2.number << " �� �����" << endl;
	}
	friend void operator > (const Flat fl1, const Flat fl2) {
		if (fl1.price > fl2.price) cout << "���� �������� �" << fl1.number << " ������ ���� �������� �" << fl2.number << endl;
		else cout << "���� �������� �" << fl1.number << " ������ ���� �������� �" << fl2.number << endl;
	}
	Flat& operator = (const Flat& fl) {
		if (this == &fl) return *this;
		s = fl.s;
		price = fl.price;
		return *this;
	}
};

