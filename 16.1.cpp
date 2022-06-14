#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int N, k, i;
    cout << "введите число N - размер массива" << endl;
    cin >> N;
    if (N <= 0) {
        cout << "введите N заново" << endl;
    }
    else {
        int* mas = new int[N];
        for (i = 0, k = 1; i < N; k += 2, i++) {
            mas[i] = k;
            cout << mas[i] << " ";
        }
    }

    return 0;
}
