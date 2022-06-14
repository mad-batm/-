#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "введите число А" << endl;
    cin >> A;
    cout << "введите число B" << endl;
    cin >> B;

    if (A != B) {
        if (A > B) {
            B = A;
            cout << "новые значения" << endl;
            cout << "A=" << A << endl;
            cout << "B=" << B << endl;
        }
        else {
            A = B;
            cout << "новые значения" << endl;
            cout << "A=" << A << endl;
            cout << "B=" << B << endl;
        }
    }
    else {
        A = 0;
        B = 0;
        cout << "новые значения" << endl;
        cout << "A=" << A << endl;
        cout << "B=" << B << endl;
    }
    return 0;
}
