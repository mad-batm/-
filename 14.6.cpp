#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int N, F1 = 0, F2 = 1, K = 2;
    cout << "введите N" << endl;
    cin >> N;

    while (N > F2) {
        F2 = F2 + F1;
        F1 = F2 - F1;
        K++;
    }
    if (N = F2)
        cout << "Порядковый номер числа Фибоначчи = " << K << endl;
    else
        cout << N << " не является числом Фибоначчи" << endl;

    return 0;
}
