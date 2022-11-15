#include <iostream>

using namespace std;

int main()
{
    char znak;
    
    cout << "Wprowadz znak ";
    cin >> znak;

    while (znak != 't')
    {
        cout << "Wprowadz znak ";
        cin >> znak;
    }
    cout << endl << "Wprowadziles znak 't'. Program sie zakonczyl." << endl;

    return 0;
}
