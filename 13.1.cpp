#include <iostream>
#include <locale.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "Russian");
    float i, q, k;
    cout << "введите стоимость 1 кг конфет" << endl;
    cin >> q;

    for (i = 0.1; i < 1; i += 0.1) {
        k = i * q;
        cout << i * 1000 << " г конфет стоят " << k << " руб" << endl;
    }
    cout << "1 кг конфет стоит " << q << " руб" << endl;

    return 0;
}
