#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, K, L, k = 0;
    float sr = 0;
    cout << "введите число N - размер массива" << endl;
    cin >> N;
    cout << "введите число K" << endl;
    cin >> K;
    cout << "введите число L" << endl;
    cin >> L;

    if (1 <= K && K <= L && L <= N-1) {
        int* mas = new int[N];
        int num;
        cout << "введите значения элементов массива" << endl;
        for (int i = 0; i < N; i++) {
            cin >> num;
            mas[i] = num;
        }

        for (int i = K; i <= L; i++) {
            k++;
            sr = sr + mas[i];
        }

        cout << "среднее арифметическое элементов массива с номерами от K до L равно " << sr / k << endl;

    }
    else {
        cout << "введите K и L заново" << endl;
    }
    return 0;
}


