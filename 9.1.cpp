#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int N, n;
    printf("введите количесво секунд, прощедшее с начала суток ");
    scanf("%d", &N);

    if (N > 86400) {
        printf("в сутках не может быть столько секунд, введите заново");
    }
    else {
        n = N % 60;
        printf("%d сек прошло с начала последей минуты", n);
    }
}

