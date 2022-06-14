
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, a, b, c;
    cout << "введите трёхзначное число" << endl;
    cin >> A;

    a = A / 100;
    A = A - a * 100;
    b = A / 10;
    c = A - b * 10;

    if (a > b && b > c)
        cout << "Цифры числа образуют убывающую последовательность" << endl;
    else if (a < b && b < c)
        cout << "Цифры числа образуют возрастающую последовательность" << endl;
    else
        cout << "Цифры числа не образуют никакой последовательности" << endl;

    return 0;
}
