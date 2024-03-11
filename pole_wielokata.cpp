/*
Pole wielokąta

Dane wejściowe
6
-5 1
-3 4
1 5
3 2
2 -2
-2 -3
Dane wyjściowe
4
*/

#include <iostream>

using namespace std;

struct Point
{
    double x;
    double y;
};

double area_triangle(Point A, Point B, Point C)
{
    return 0.5 * abs((B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x));
}
double area_polygon(int n, Point points[])
{
    double area = 0;
    for (int i = 1; i < n - 1; i++)
        area += area_triangle(points[0], points[i], points[i + 1]);
    return area;
}

int main()
{
    int n;
    cout << "Podaj liczbe punktow: ";
    cin >> n;
    Point points[n];
    for (int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;

    cout << area_polygon(n, points);
    return 0;
}