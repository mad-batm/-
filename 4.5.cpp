#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, r, a0, b0;

    printf("введите ненулевое число а:\n");
    scanf("%f", &a);
    printf("введите ненулевое число b:\n");
    scanf("%f", &b);

    a0 = abs(a);
    b0 = abs(b);

    printf("сумма модулей = %f\n", a0 + b0);

    if (a0 > b0) {
        r = a0 - b0;
    }
    else {
        r = b0 - a0;
    }
    printf("разность модулей = %f\n", r);
    printf("произведение модулей = %f\n", a0 * b0);
    printf("частное модулей = %f\n", a0 / b0);

    return 0;
}
