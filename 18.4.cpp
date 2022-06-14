#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i;
    cout << "Введите размер массива: ";
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
    cout << "min = " << min << endl;
    cout << "max = " << max << endl;


    if (imin < imax) {
        for (i = 0; i < n; i++)
            if (i > imin && i < imax) {
                mas[i] = 0;
                cout << mas[i] << " ";

            }
            else
                cout << mas[i] << " ";
    }
    else
    {
        for (i = 0; i < n; i++)
            if (i > imax && i < imin) {
                mas[i] = 0;
                cout << mas[i] << " ";
            }
            else
                cout << mas[i] << " ";
    }


    return 0;
}

