// Lab_5.3.cpp
// < Онишківа Остапа >
// Лабораторна робота No 5.3
// Функції, що містять розгалуження та цикли з рекурентними співвідношеннями.
// Варіант 5

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double h(const double x);

int main()
{
	int n;
	double rp, rk,dr,r;
	long double result;
	cout << (cos(-2) + 1) / exp(-2) << endl;
	cout << "rp = "; cin >> rp;
	cout << "rk = "; cin >> rk;
	cout << "n = "; cin >> n;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "r" << "|"
		<< setw(11) << "result" << "|"
		<< endl;
	cout << "-------------------------------------------------" << endl;


	dr = (rk - rp) /n;
	r = rp;
	while (r<=rk)
	{
		result = h(r + 1) + pow(h(r * r + 1), 2) + 1;

		cout << "|" << setw(7) << r << "|" << setw(11) <<result << "|" << endl;

		r += dr;

	}
	cout << "-------------------------------------------------" << endl;
	return 0;
}

double h(const double x)
{
	if (abs(x)<1 && x!=0)
	{
		double S = 0;
		int n = 0;
		double a = x * x;
		S = a;
		do
		{
			n++;
			double R = pow(x, 4) / (4 * n * n + 2 * n);
			a *= R;
			S += a;
		} while (n < 6);
		return S / sin(x * x);
	}
	else
	{
		return (cos(x) + 1) / exp(x);
	}
}
