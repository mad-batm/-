#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int A, B;
    cout << "введите А" << endl;
    cin >> A;
    cout << "введите В" << endl;
    cin >> B;
    cout << " " << endl;

    if (A >= B) {
        while (A >= B) {
            A = A - B;
        }
        cout << "Незанятая часть отрезка А = " << A << endl;
    }
    else
        cout << "введите числа заново" << endl;

    return 0;
}



