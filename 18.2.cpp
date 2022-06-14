#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i, j, s, k;
    cout << "Введите размер массива: ";
    cin >> n;

    cout << "Массив А: ";
    int* A = new int[n];
    for (i = 0; i < n; i++)
        A[i] = rand() % 100;
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    cout << endl;

    cout << "Массив B: ";
    double* B = new double[n];
    for (i = 0; i < n; i++)
    {
        k = 0;
        s = 0;
        B[i] = 0;
        for (j = 0; j <= i; j++)
        {
            s = s + A[j];
            k++;
        }
        B[i] = (double)s / k;
        cout << B[i] << " ";
    }
    return 0;
}

