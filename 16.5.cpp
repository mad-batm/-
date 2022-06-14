#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N, num, i;
    cout << "введите число N - размер массива" << endl;
    cin >> N;

    int* A = new int[N];

    cout << "введите значения элементов массива" << endl;
    for (i = 0; i < N; i++) {
        cin >> num;
        A[i] = num;
    }

    cout << endl;

    for (i = 0; i < N; i++) {
        if (i % 2 == 1)
            cout << A[i] << " ";
    }

    for (i = N - 1; i >= 0; i--) {
        if (i % 2 == 0)
            cout << A[i] << " ";
    }
    return 0;
}

