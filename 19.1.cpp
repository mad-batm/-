#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int n, i, k = 0;

    cout << "введите размер массива ";
    cin >> n;

    cout << "введите значения элементов массива" << endl;
    int* mas = new int[n];
    for (i = 0; i < n; i++)
        cin >> mas[i];

    for (i = 1; i < n; i++)
    {
        if (mas[k] != mas[i])
        {
            k++;
            mas[k] = mas[i];
        }
    }
    k++;

    for (i = 0; i < k; i++)
        cout << mas[i] << " ";

    return 0;
}
