#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    double x;
    double y;
};

double area_triangle(Point A, Point B, Point C)
{
    return 0.5 * fabs((B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x));
}

double area_polygon(int n, Point points[])
{
    double area = 0;
    for (int i = 0; i < n - 1; i++)
    {
        area += area_triangle(points[0], points[i], points[i + 1]);
    }
    return area;
}
int main()
{
    int n;
    cout << "Podaj liczbe wierzcholkow: ";
    cin >> n;
    cout << "Podaj wierzcholki: ";
    Point points[n];
    for (int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;

    cout << area_polygon(n, points);

    return 0;
}