#include <iostream>

using namespace std;

int main()
{
    char a;
    
    do
    {
        cout << "Wprowadz znak ";
        cin >> a;
    } 
    while (a != 't');
    
    cout << endl << "Wprowadziles znak 't'. Program zakonczyl prace." << endl;

    return 0;
}
