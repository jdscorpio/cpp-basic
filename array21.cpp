#include <bits/stdc++.h>

using namespace std;

int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int tab[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> tab[i][j];
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}