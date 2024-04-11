#include <iostream>
#include <vector>
#include <utility> // pair
#include <algorithm>

using namespace std;

int main()
{
    pair<int, int> p1;
    p1.first = 30;
    p1.second = 45;

    cout << p1.first << " " << p1.second << endl;
    pair<int, int> p2(30, 42);
    pair<int, int> p3 = make_pair(3, 7);
    vector<pair<int, int>> vp;
    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);

    sort(vp.begin(), vp.end());

    for (const auto &i : vp)
        cout << i.first << " " << i.second << endl;
    return 0;
}