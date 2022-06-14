#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int A, B, i, j;
    cout << "введите А" << endl;
    cin >> A;
    cout << "введите В" << endl;
    cin >> B;
    cout << " " << endl;

    if (A < B) {
        for (i = A; i <= B; i++) {
            for (j = 1; j <= i; j++)
                cout << i << endl;
        }
    }
    else
        cout << "введите числа заново" << endl;

    return 0;
}


