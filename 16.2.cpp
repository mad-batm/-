#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N, F, i, D, A;
    cout << "введите число N - размер массива" << endl;
    cin >> N;

    if (N <= 1) {
        cout << "введите N заново" << endl;
    }

    else {
        cout << "введите первый член прогресии" << endl;
        cin >> A;
        cout << "введите знаменатель геометрической прогрессии" << endl;
        cin >> D;
        int* mas = new int[N];
        F = D;

        cout << A << " ";
        for (i = 1; i < N; i++) {
            mas[i] = A * F;
            F = F * D;
            cout << mas[i] << " ";
        }
    }
    return 0;
}

