﻿#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "locale.h"
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include "Shop.h"
#include "Owner.h"
#include "Boxoffice.h"
#include "Warehouse.h"
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	Shop* Ashan;
	Owner* Alisher;
	Warehouse* house;
	int N = 5;
	Ashan = new Shop[N];
	for (int i = 0; i < N; i++)
	{
		Ashan[i].init("A", "B", "C", "10:00-20:00");
		Ashan[i].print();
		cloakShop(Ashan[i]);
	}
	Ashan->CountOfShop();
	delete[] Ashan;
	Ashan->CountOfShop();
	Alisher = new Owner;
	Alisher->enter();
	Alisher->print();
	delete Alisher;
	house = new Warehouse;
	(*house).init("Арбуз Тыква Огурец", 7);
	(*house).print();
	int t = 20;
	cout << "\nСкорость разгрузки "<< t <<" тонн в минутах: " << *(*house).cloakWarehouse(20) << "\n";
	(*house).Poisk("Тыква");
	delete house;
	Boxoffice box;
	box.enter();
	box.print();
	int x = 100;
	cout << "\nВремя обслуживания " << x << " клиентов - " << box.cloakBoxoffice(x) << " минуты\n";
	Boxoffice box1 = box++;
	box1.print();	
	Boxoffice box2 = ++box;
	box2.print();
	Boxoffice box3 = box1 + box2;
	box3.print();
	_getch;
}