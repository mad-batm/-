#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n, i, position;
    cout << "Введите размер массива: ";
    cin >> n;

    cout << "Введите значение элементов массива" << endl;
    int* mas = new int[n];
    for (i = 0; i < n; i++)
        cin >> mas[i];

    for (i = 0; i < n; i++) {
        if (mas[i] % 2 != 0)
            position = mas[i];
    }

    for (i = 0; i < n; i++) {
        if (mas[i] % 2 != 0)
            mas[i] = mas[i] * position;
        cout << mas[i] << " ";
    }

    return 0;
}

