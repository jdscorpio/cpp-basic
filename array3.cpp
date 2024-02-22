#include <iostream>

using namespace std;

int main()
{
    constexpr int N = 5;
    int t[N], m[N];

    cout << "Podaj elementy tablicy t: ";
    for (int i = 0; i < N; i++)
        cin >> t[i];

    cout << "Podaj elementy tablicy m: ";
    for (int i = 0; i < N; i++)
        cin >> m[i];

    bool ok = true;
    for (int i = 0; i < N; i++)
        if (t[i] != m[i])
            ok = false;
    if (ok)
        cout << "Tablice sa rowne." << endl;
    else
        cout << "Tablice nie sa rowne."
             << "\n";

    return 0;
}