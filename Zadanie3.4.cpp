#include <iostream>

using namespace std;

int main()
{
    int wiersze, c = 1, d, i, j;
    

    cout << " Wprowadz liczbe wierszy: ";
    cin >> wiersze;

    cout << endl;

    for (i = 0; i < wiersze; i++)
    {
        for (d = 1; d <= wiersze - i; d++)
            cout << "  ";
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                c = 1;
            else
                c = c * (i - j + 1) / j;
            cout << c << "   ";
        }
        cout << endl;
    }
}
