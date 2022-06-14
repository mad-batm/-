#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    double k = 1, count = 1;
    int N, j;
    cout << "введите N-целое число" << endl;
    cin >> N;

    for (j = 1; j <= N; j++) {
        k = k + 0.1;
        count = count * k;
    }
    cout << "Произведение = " << count << endl;

    return 0;
}


