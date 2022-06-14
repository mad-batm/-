#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int K = 0;
    double S = 1000;
    float P;
    cout << "размер вклада " << S << " руб" << endl;
    cout << "введите процент P, 0<P<25, на который вклад каждый месяц будет увеличиваться" << endl;
    cin >> P;

    if (P < 25 || P>0) {
        P = 1 + P / 100;
        while (S < 1100) {
            S = S * P;
            K++;
        }
    }
    else
        cout << "проценты не соответствуют заданному интервалу" << endl;

    cout << "через " << K << " месяцев размер вклада превысит 1100 руб" << endl;
    cout << "итоговый размер вклада " << S << " руб" << endl;

    return 0;
}
