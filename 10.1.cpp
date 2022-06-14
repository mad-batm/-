#include <iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "введите A" << endl;
    cin >> A;
    cout << "введите В" << endl;
    cin >> B;

    if (A > 2 && B <= 3)
        cout << "Справедливы неравенства А>2 и В<=3" << endl;
    else
        cout << "Несправедливы неравенства А>2 и В<=3" << endl;

    return 0;
}


