#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Russian");
    int N;
    double d;
    int flag;
    cout << "введите число N - размер массива" << endl;
    cin >> N;

    int* mas = new int[N];
    int num;
    cout << "введите значения элементов массива" << endl;
    for (int i = 0; i < N; i++) {
        cin >> num;
        mas[i] = num;
    }

    d = mas[1] - mas[0];
    flag = 1;
    int i = 1;
    while (flag = 1 && i < N) {
        if (mas[i + 1] - mas[i] != d) {
            flag = 0;
        }
        i++;
    }
    if (flag = 1) cout << d << endl;
    else cout << 0 << endl;

    return 0;
}