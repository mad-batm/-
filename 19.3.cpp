#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n, i;

    cout << "введите размер массива ";
    cin >> n;

    int* mas = new int[n];
    for (i = 0; i < n; i++)
        mas[i] = rand() % 1000;
    for (i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << endl;

    int min = 10000000000, max = -10000000000, imin = 0, imax = 0;

    for (i = 0; i < n; i++) {
        if (mas[i] < min)
        {
            min = mas[i];
            imin = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (mas[i] > max)
        {
            max = mas[i];
            imax = i;
        }
    }

    if (imax > imin)
        imax++;

    n++;
    for (i = n - 1; i >= imin; i--)
        mas[i] = mas[i - 1];
    mas[imin] = 0;

    n++;
    for (i = n - 1; i > imax + 1; i--)
        mas[i] = mas[i - 1];
    mas[imax + 1] = 0;

    for (i = 0; i < n; i++)
        cout << mas[i] << " ";

    return 0;
}


