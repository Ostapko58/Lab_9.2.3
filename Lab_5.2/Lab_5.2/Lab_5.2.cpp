// Lab_5.3.cpp
// < Онишківа Остапа >
// Лабораторна робота No 5.3
// Обчислення суми ряду Тейлора за допомогою функцій.
// Варіант 5

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double A(const double x, const int n, double a);
double S(const double x, const double eps, int& n, double s);

int main()
{
	double x, xp, xk, dx, s=0, eps;
	int n=0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(16) << "log((1+x)/(1-x))" << " |"
		<< setw(10) << "s" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		s = S(x, eps, n, s);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(16) << setprecision(5) << log((1 + x) / (1 - x)) << " |"
			<< setw(10) << setprecision(5) << 2. * s << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}

	cout << "-------------------------------------------------" << endl;

	return 0;
}

double S(const double x, const double eps, int& n, double s)
{
	n = 0;
	double a = x;
	s = a;
	while (abs(a) >= eps)
	{
		n++;
		a = A(x, n, a);
		s += a;
	}
	
	return s;
}

double A(const double x, const int n, double a)
{
	double R = ((2. * n - 1) * x * x) / (2. * n + 1);
	a *= R;
	return a;
}

