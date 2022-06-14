#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "введите A" << endl;
    cin >> A;
    cout << "введите В" << endl;
    cin >> B;
    cout << "введите С" << endl;
    cin >> C;

    if (A < B && B < C)
        cout << "Справедливо двойное неравенство A<B<C" << endl;
    else
        cout << "Несправедливо двойное неравенство A<B<C" << endl;

    return 0;
}

