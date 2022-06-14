#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, a, b, c, d;

    cout << "введите четырёхначное число" << endl;
    cin >> A;

    B = A / 100;
    A = A % 100;
    a = B / 10;
    b = B % 10;
    c = A / 10;
    d = A % 10;

    if (a == d && b == c)
        cout << "Данное число читается одинаково слева направо и справа налево" << endl;
    else
        cout << "Данное число не является палиндромом" << endl;

    return 0;
}


