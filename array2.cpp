// Sprawdzi, czy podana liczba jest w tablicy

#include <iostream>

using namespace std;

int main()
{
    int tab[] = {1, 2, 3, 4, 5};
    tab[3] = 6;
    int search_number;
    cout << "Podaj szukana wartosc: ";
    cin >> search_number;

    bool ok = false;
    for (int i = 0; i < 5; i++)
    {
        if (tab[i] == search_number)
        {
            ok = true;
            break;
        }
    }

    if (ok == true)
        cout << "Znalazlem";
    else
        cout << "Nie znalazlem";

    return 0;
}