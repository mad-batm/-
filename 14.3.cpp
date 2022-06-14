#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int K = 0, S = 0, N;
    cout << "введите N" << endl;
    cin >> N;
    cout << " " << endl;

    if (N > 1) {
        while (S < N) {
            S = S + K;
            K++;
        }
    }
    else
        cout << "введите N заново" << endl;

    cout << "К = " << K - 1 << endl;

    return 0;
}

