#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float A, S=0;
    int N, j = 0;
    cout << "введите N-целое число" << endl;
    cin >> N;
    cout << "введите число А" << endl;
    cin >> A;

    while (j <= N) {
        S += pow(A, j);
        j++;
    }
    cout << "Значение суммы = " << S << endl;

    return 0;
}



