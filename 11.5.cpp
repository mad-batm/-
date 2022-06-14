#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "введите целое число" << endl;
    cin >> num;

    if (num < 0) {
        if (num % 2 == 0)
            cout << "отрицательное чётное число" << endl;
        else
            cout << "отрицательное нечётное число" << endl;
    }

    if (num > 0) {
        if (num % 2 == 0)
            cout << "положительное чётное число" << endl;
        else
            cout << "положительное нечётное число" << endl;
    }

    if (num == 0)
        cout << "нулевое число" << endl;

    return 0;
}


