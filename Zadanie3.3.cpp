#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() 
{
	double a, b, c, b1, delta;
	double x, x1, x2;
	delta = 0;

	cout << "Program rozwiazuje rownanie kwadratowe: a*x^2 + b*x + c = 0" << endl << endl;

	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	cout << endl << "Rownanie ma postac: " << a << "*x^2 + " << b << "*x + " << c << " = 0" << endl;

	b1 = pow(b, 2);
	delta = b1 - (4 * a * c);

	cout << endl << "Delta wyniosla " << delta << endl << endl;

	if (delta < 0) 
		{
		cout << "Rownianie nie ma rozwiazania." << endl << endl;
		} 
			else if (delta == 0) 
					{
					x = b / (2 * a);
					cout << "Rozwiazaniem rownania jest liczba x= " << fixed << setprecision(2) << x << endl << endl;
					}
						else 
						{
						x1 = (-b - sqrt(delta)) / (2 * a);
						x2 = (-b + sqrt(delta)) / (2 * a);
						cout << "Rozwiazaniem rownania sa liczby: " << endl;
						cout << "x1 = " << fixed << setprecision(2) << x1 << endl;
						cout << "x2 = " << fixed << setprecision(2) << x2 << endl << endl;
						}

	return 0;
}