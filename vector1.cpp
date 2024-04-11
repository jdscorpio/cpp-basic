#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> something(const vector<int> &a,
                      const vector<int> &b)
{
    int n = a.size() + b.size();
    vector<int> ab(n);
    for (int i = 0; i < a.size(); i++)
        ab[i] = a[i];
    for (int j = a.size(); j < n; j++)
        ab[j] = b[j - a.size()];
    sort(ab.begin(), ab.end(), greater<int>());

    return ab;
}

int main()
{
    vector<int> v = {2, 5, 3, 1};
    vector<int> u = {7, 4, 6};
    for (auto el : something(v, u))
        cout << el << " ";
    cout << endl;

    return 0;
}