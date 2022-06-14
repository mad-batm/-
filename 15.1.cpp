#include <iostream>
#include <locale.h>

using namespace std;

float PowerA3(float A, float B);

int main() {
    setlocale(LC_ALL, "Russian");
    int i;
    float A, B=0;
    for (i = 0; i < 5; i++) {
        cout << "введите число" << endl;
        cin >> A;
        PowerA3(A, B);
    }

    return 0;
}


float PowerA3(float A, float B) {

    B = A * A * A;
    cout << "Ваше число в кубе = " << B << endl;
    cout << " " << endl;
    return B;
}

