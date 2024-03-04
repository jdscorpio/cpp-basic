#include <iostream>

using namespace std;

void my_swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void my_swap2(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void my_swap3(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int var = 41;
    cout << var << "\n";
    cout << sizeof(var) << "\n";
    cout << &var << "\n";
    int *ptr_var = nullptr;
    ptr_var = &var;
    // int *ptr_var = &var;

    cout << ptr_var << "\n";
    cout << *ptr_var << "\n";
    var += 3;
    cout << *ptr_var << "\n";

    int a = 3;
    int b = 7;
    cout << a << " " << b << "\n";
    my_swap1(a, b);
    cout << a << " " << b << "\n";
    my_swap2(&a, &b);
    cout << a << " " << b << "\n";
    my_swap3(a, b);
    cout << a << " " << b << "\n";

    return 0;
}
