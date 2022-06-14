#include <iostream>
#include <locale.h>
#define pi 3.1415

using namespace std;

float RingS(float R1, float R2);

int main() {
    setlocale(LC_ALL, "Russian");
    float R1, R2;
    int i;
    for (i = 0; i < 3; i++) {
        cout << "введите радиусы окружностей; первым вводится больший радиус" << endl;
        cin >> R1 >> R2;
        RingS(R1, R2);
    }
    return 0;
}

float RingS(float R1, float R2) {
    double S, S1, S2;


    if (R2 < R1) {
        S1 = pi * R1 * R1;
        S2 = pi * R2 * R2;
        S = S1 - S2;
        cout << "Площадь кольца = " << S << endl;
        cout << " " << endl;
    }
    else
        cout << "введены некорректные данные" << endl;
    return 0;
}

