#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int num;
    cout << "введите целое число от 1 до 999" << endl;
    cin >> num;

    if (num < 1 || num>999)
        cout << "введите число из указанного промежутка" << endl;

    if (num >= 1 && num < 10) {
        if (num % 2 == 0)
            cout << "чётная цифра" << endl;
        else
            cout << "нечётная цифра" << endl;
    }

    if (num >= 10 && num <= 99) {
        if (num % 2 == 0)
            cout << "чётное двузначное число" << endl;
        else
            cout << "нечётное двузначное число" << endl;
    }

    if (num >= 100 && num <= 999) {
        if (num % 2 == 0)
            cout << "чётное трёхзначное число" << endl;
        else
            cout << "нечётное трёхзначное число" << endl;
    }

    return 0;
}


