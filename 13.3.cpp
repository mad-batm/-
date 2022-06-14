#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    float S = 0;
    int N, j;
    cout << "введите N-целое число" << endl;
    cin >> N;

    for (j = 1; j <= N; j++) {
        S = S + (2 * j - 1);
        cout << "Значение суммы = " << S << endl;
    }
    return 0;
}

