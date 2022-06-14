#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i, t;
    cout << "Введите размер массивов: ";
    cin >> n;

    cout << "Было" << endl;
    cout << "Массив А: ";
    int* A = new int[n];
    for (i = 0; i < n; i++)
        A[i] = rand() % 100;
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    cout << "Массив B: ";
    int* B = new int[n];
    for (i = 0; i < n; i++)
        B[i] = rand() % 100;
    for (i = 0; i < n; i++)
        cout << B[i] << " ";

    cout << endl;

    for (i = 0; i < n; i++) {
        t = A[i];
        A[i] = B[i];
        B[i] = t;
    }
    cout << "Стало" << endl;
    cout << "Массив А: ";
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;
    cout << "Массив B: ";
    for (i = 0; i < n; i++)
        cout << B[i] << " ";

    return 0;
}

