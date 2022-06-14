#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int A, B;
    cout << "введите A" << endl;
    cin >> A;
    cout << "введите B" << endl;
    cin >> B;

    while (A != B) {
        if (A > B)
            A = A - B;
        else
            B = B - A;
    }
    cout << "НОД = " << A << endl;
    return 0;
}


