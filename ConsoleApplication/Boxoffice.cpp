#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Boxoffice.h"
#include <string>

void Boxoffice::init(int w, int c, FIO f) { //����� �������� 
	this->workers = workers;
	this->count = count;
	this->fio = fio;
}



void Boxoffice::enter() {
	std::cout << "\n������� ��� �������� ������� : ";
	fio.enter();
	std::cout << "������� ���-�� ���� �������: ";
	std::cin >> workers;
	std::cout << "\n������� ���-�� ����: ";
	std::cin >> count;
	while (getchar() != '\n');
}

void Boxoffice::print() {
	std::cout << "\n�����:\n���-�� ������� - " << workers << "\n��� - �� ���� - " << count;
	fio.print();
}

int& Boxoffice::cloakBoxoffice(int x) {
	int a;
	if (count - workers < 0)
		a = (x / count) * 2;
	else
		a = (x / workers) * 2;
	return a;
}

Boxoffice& Boxoffice::operator++()
{
	this->workers++;
	this->count++;
	return *this;
}

Boxoffice& Boxoffice::operator++(int x) {
	Boxoffice temp = *this;
	this->workers++;
	this->count++;
	return temp;
}

Boxoffice Boxoffice::operator+(const Boxoffice& other) {
	Boxoffice temp;
	temp.workers = this->workers + other.workers;
	temp.count = this->count + other.count;
	return temp;
}