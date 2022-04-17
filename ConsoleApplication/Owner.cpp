#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Owner.h"

void Owner::init(FIO f, int i, int e) {
	this->fio = fio;
	this->income = income;
	this->expenses = expenses;
}

void Owner::enter() {
	std::cout << "������� ��� ���������: ";
	fio.enter();
	std::cout << "\n������� ������: ";
	std::cin >> income;
	std::cout << "\n������� �������: ";
	std::cin >> expenses;
	while (getchar() != '\n');
}

void Owner::print() {
	std::cout << "\n���������� � ���������:\n";
	fio.print();
	std::cout << "\n������ - " << income << "\n������� - " << expenses << "\n������� - " << profitOwner() << "\n";
}
int Owner::profitOwner() {
	return income - expenses;
}
