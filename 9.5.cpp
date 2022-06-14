#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int des, year;
    printf("введите год ");
    scanf("%d", &year);
    if (year > 0) {
        des = (year - 1) / 100 + 1;
        printf("%d год соответствует %d столетию", year, des);
    }
    else {
        printf("такого года не существует");
    }
}

