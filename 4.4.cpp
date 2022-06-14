#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    float a, b, r, a1, b1;

    printf("введите ненулевое число а:\n");
    scanf("%f", &a);
    printf("введите ненулевое число b:\n");
    scanf("%f", &b);

    a1 = a * a;
    b1 = b * b;

    printf("сумма квадратов = %f\n", a1 + b1);
    if (a1 > b1) {
        r = a1 - b1;
    }
    else {
        r = b1 - a1;
    }
    printf("разность квадратов = %f\n", r);
    printf("произведение квадратов = %f\n", a1 * b1);
    printf("частное квадратов = %f\n", a1 / b1);

    return 0;
}
