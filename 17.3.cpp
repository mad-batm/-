#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, min;

    cout << "введите число N - размер массива" << endl;
    cin >> N;

    int* A = new int[N];
    int num;
    cout << "введите значения элементов массива" << endl;
    for (int i = 0; i < N; i++) {
        cin >> num;
        A[i] = num;
    }

    min = A[2];
    for (int i = 2; i < N; i += 2) {
        if (A[i] < min) min = A[i];
    }


    cout << "минимальный элемент с чётным номером " << min << endl;

    return 0;
}

