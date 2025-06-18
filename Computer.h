#pragma once
#include <iostream>
using namespace std;

struct computer{
	char name[100];
	int ram = 0;
	float price = 0;
	void showInfo() {
		cout << "name: " << name << endl;
		cout << "price" << price << endl;
		cout << "ram: " << ram << endl;
	}
};