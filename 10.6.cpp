#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a, b, c;

    cout << "введите стороны треугольника" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
        cout << "Треугольник со сторонами a, b, c является прямоугольным" << endl;
    else
        cout << "Треугольник с данными сторонами a, b, c не является прямоугольным" << endl;

    return 0;
}
