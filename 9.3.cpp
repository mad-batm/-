#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int K, num_day, N;
    printf("введите любой день года ");
    scanf("%d", &K);
    printf("введите каким днём недели было 1 января (1-понедельник, 2-вторник, 3-среда, 4-четверг, 5-пятница, 6-суббота, 7-воскресение)");
    scanf("%d", &N);

    if (K >= 1 && K <= 365 && N >= 1 && N <= 7) {
        num_day = (K + N - 1) % 7;
        printf("%d дню года соответствует %d день недели", K, num_day);
    }
    else {
        printf("или в году нет столько дней, или вы ввели неправильный день недели. попробуйте снова");
    }
}
