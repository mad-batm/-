#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, sum;
    cout << "введите число А" << endl;
    cin >> A;
    cout << "введите число B" << endl;
    cin >> B;
    cout << "введите число C" << endl;
    cin >> C;
    if (A > B && B > C || B > A && A > C) {
        sum = A + B;
        cout << "Сумма наибольших = " << sum << endl;
    }
    if (C > A && A > B || A > C && C > B) {
        sum = A + C;
        cout << "Сумма наибольших = " << sum << endl;
    }
    if (C > B && B > A || B > C && C > A) {
        sum = B + C;
        cout << "Сумма наибольших = " << sum << endl;
    }
    return 0;
}
