#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int N, maxn;

    cout << "введите число N - размер массива" << endl;
    cin >> N;

    int* A = new int[N];
    int num;
    cout << "введите значения элементов массива" << endl;
    for (int i = 0; i < N; i++) {
        cin >> num;
        A[i] = num;
    }

   
    for (int i = 1; i < N - 1; i++) {
        if (A[i-1]<A[i] && A[i+1]<A[i]) maxn=i;
    }


    cout << "номер последнего локального максимума " << maxn << endl;

    return 0;
}

