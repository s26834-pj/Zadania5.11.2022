#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x, y, suma, roznica, iloczyn, iloraz;
	
	cout << "Wprowadz x: ";
	cin >> x;

	cout << "Wprowadz y: ";
	cin >> y;

	suma = x + y;
	roznica = x - y;
	iloczyn = x * y;
	iloraz = x / y;

	cout << endl;

	cout << "Wynik dodawania wynosi: " << fixed << setprecision(2) << suma << endl;
	cout << "Wynik odejmowania wynosi: " << fixed << setprecision(2) << roznica << endl;
	cout << "Wynik mnozenia wynosi: " << fixed << setprecision(2) << iloczyn << endl;
	cout <<"Wynik dzielenia wynosi: "<< fixed << setprecision(2) << iloraz << endl;

	return 0;
}
