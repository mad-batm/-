#include <iostream>
#include <locale.h>

using namespace std;

float Fact2(int N);

int main() {
    setlocale(LC_ALL, "Russian");
    int N;
    cout << "введите число" << endl;
    cout << "N = ";
    cin >> N;
    Fact2(N);



    return 0;
}

float Fact2(int N)
{
    int f = 1;
    for (; N > 1; N -= 2)
        f *= N;
    cout << "N!! =  " << f;
    return f;
}

