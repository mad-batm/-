#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n, i, j;

    cout << "введите размер массива ";
    cin >> n;

    cout << "введите значения элементов массива" << endl;
    int* mas = new int[n];
    for (i = 0; i < n; i++)
        cin >> mas[i];

    for (i = n - 1; i >= 0; i--) {
        if (mas[i] > 0) {
            n++;
            for (j = n; j > i; j--)
                mas[j] = mas[j - 1];
            mas[i] = 0;
        }
    }

    for (i = 0; i < n; i++)
        cout << mas[i] << " ";


    return 0;
}





