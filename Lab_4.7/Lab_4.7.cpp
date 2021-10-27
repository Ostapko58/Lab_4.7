// Lab_4.7.cpp
// < Онишківа Остапа >
// Лабораторна робота No 4.7
// Обчислення суми ряду Тейлора за допомогою ітераційних циклів та рекурентних співвідношень.
// Варіант 5

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double x, xp, xk, dx, R, a, S, eps;
	int n;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(16) << "log((1+x)/(1-x))" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		n = 1;
		a = x;
		S = a;
		
		while (abs(a) >= eps)
		{
			n++;
			R = ((2 * n - 1) * x * x) / (2 * n + 1);
			a *= R;
			S += a;
		}
		
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(16) << setprecision(5) << log((1+x)/(1-x)) << " |"
			<< setw(10) << setprecision(5) << 2*S << " |"
			<< setw(5) << n << " |"
			<< endl;

		x += dx;
	}

	cout << "-------------------------------------------------" << endl;

	return 0;
}