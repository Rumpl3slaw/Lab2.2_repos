// Lab2.1.cpp 
// < Демчук Роман >
// Лабораторна робота № 2.1. 
// Лінійні програми. 
// Варіант 5

#include <iostream>
using namespace std;

int main()
{
	double a;
	//double z1;
	double z2;

	cout << "a="; cin >> a;

	//z1 = 1 - 1. / 4 * sin(2 * a) * sin(2 * a) + cos(2 * a);
	z2 = cos(a) * cos(a) + cos(a) * cos(a) * cos(a) * cos(a);

	//cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;

	return 0;
}
