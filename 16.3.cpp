#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N, A, B, i, j;
    cout << "введите число N - размер массива" << endl;
    cin >> N;
    if (N <= 2) {
        cout << "введите N заново " << endl;
    }
    else {
        cout << "введите число A первый элемент последовательности" << endl;
        cin >> A;
        cout << "введите число B второй элемент последовательности" << endl;
        cin >> B;
        int* mas = new int[N];

        mas[0] = A;
        mas[1] = B;

        cout << A << " " << B << " ";

        for (i = 2; i < N; i++) {
            mas[i] = 0;
            for (j = 0; j <= i - 1; j++) {
                mas[i] = mas[i] + mas[j];
            }
            cout << mas[i] << " ";
        }
    }

    return 0;
}

