#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int K, num_day;
    printf("введите любой день года ");
    scanf("%d", &K);

    if (K >= 1 && K <= 365) {
        num_day = K % 7;
        printf("%d дню года соответствует %d день недели", K, num_day);
        //0-воскресенье, 1-понедельник, 2-вторник, 3-среда, 4-четверг, 5-пятница, 6-суббота
    }
    else {
        printf("в году нет столько дней");
    }
}

