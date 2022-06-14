#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int n, i, j, m, count, k;

    cout << "введите размер массива ";
    cin >> n;

    cout << "введите значения массива " << endl;
    int* a = new int[n];
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                m = j;
            }
        }
        if (count == 2) {
            a[i] = 0;
            a[m] = 0;
        }
    }


    for (i = 0; i < n; i++) {
        if (a[i] == 0) {
            for (j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }

    cout << "размер нового массива " << n << endl;
    cout << "новый массив" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
