#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, a;
    cout << "введите A" << endl;
    cin >> A;


    if (A % 2 == 0 && A >= 10 && A <= 99)
        cout << "Данное число является чётным двузначным" << endl;
    else
        cout << "Введённое число либо нечётное, либо не двузначное" << endl;

    return 0;
}
