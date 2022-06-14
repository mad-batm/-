#include <iostream>
#include <locale.h>

using namespace std;

int Sign(float X);

int main() {
    setlocale(LC_ALL, "Russian");
    float A, B, res;
    cout << "введите число A" << endl;
    cin >> A;
    cout << "введите число B" << endl;
    cin >> B;
    res = Sign(A) + Sign(B);
    cout << "Результат " << res << endl;
    return 0;
}

int Sign(float X) {

    if (X > 0)
        return 1;
    else if (X == 0)
        return 0;
    else return -1;
}


