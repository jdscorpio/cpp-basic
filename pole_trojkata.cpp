#include <iostream>

using namespace std;

struct Color
{
    int r; // 0 - 255
    int g;
    int b;
};

struct Point
{
    double x;
    double y;
    Color color;
};

double area_triangle(Point A, Point B, Point C)
{
    return 0.5 * abs((B.x - A.x) * (C.y - A.y) - (B.y - A.y) * (C.x - A.x));
}

int main()
{
    Point A, B, C;
    cout << "Podaj punkt A: ";
    cin >> A.x >> A.y;
    cout << "Podaj punkt B: ";
    cin >> B.x >> B.y;
    cout << "Podaj punkt C: ";
    cin >> C.x >> C.y;

    cout << area_triangle(A, B, C) << "\n";
    A.color.b = 45;

    return 0;
}