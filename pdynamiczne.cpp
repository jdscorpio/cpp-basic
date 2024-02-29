#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    srand(time(NULL));
    int t[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            t[i][j] = rand() % 11;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << t[i][j] << "\t";
        cout << "\n";
    }

    int w[n][m];
    w[0][0] = t[0][0];

    // pierwszy wiersz
    for (int i = 1; i < m; i++)
        w[0][i] = w[0][i - 1] + t[0][i];
    // pierwsza kolumna
    for (int i = 1; i < n; i++)
        w[i][0] = w[i - 1][0] + t[i][0];

    // srodek
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++)
            w[i][j] = max(w[i - 1][j], w[i][j - 1]) + t[i][j];

    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << w[i][j] << "\t";
        cout << "\n";
    }

    return 0;
}