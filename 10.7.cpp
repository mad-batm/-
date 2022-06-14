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

    if (a < b + c && b < a + c && c < a + b)
        cout << "Существует треугольник со сторонами a, b, c" << endl;
    else
        cout << "Треугольника с данными сторонами не существует " << endl;

    return 0;
}
