#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    constexpr int N = 10;
    int tab[N];

    srand(time(NULL)); // inicjalizacja generatora losowych
    for (int i = 0; i < N; i++)
        tab[i] = rand() % 100 + 1; // generowanie liczby z zakresu od 1 do 100

    for (int i = 0; i < N; i++)
        cout << tab[i] << " ";
    cout << endl;

    sort(tab, tab + N); // posortowywanie tablicy w kolejności rosnącej
    for (int i = 0; i < N; i++)
        cout << tab[i] << " ";

    return 0;
}