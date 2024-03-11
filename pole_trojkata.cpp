#include <iostream>
#include <cmath>

using namespace std;

struct Color
{
    int r; // 0 - 255
    int g;
    int b;
};

struct Point
{
    double x; // współrzędna x punkt
    double y;
    Color color;
};

double area_triangle(Point A, Point B, Point C)
{
    return 0.5 * fabs((B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x));
}
int main()
{
    Point A, B, C;
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cout << area_triangle(A, B, C) << "\n";
    A.color.b = 234;

    return 0;
}