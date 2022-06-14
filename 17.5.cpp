#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, first, second;

    cout << "введите число N - размер массива" << endl;
    cin >> N;

    int* A = new int[N];
    int num;
    cout << "введите значения элементов массива" << endl;
    for (int i = 0; i < N; i++) {
        cin >> num;
        A[i] = num;
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == A[j] && i != j) {
                first = i;
                second = j;
            }

        }
    }

    if (first < second) cout << "номера одинаковых элементов по возрастанию " << second << " " << first << endl;
    if (first > second) cout << "номера одинаковых элементов по возрастанию " << first << " " << second << endl;

    return 0;
}

