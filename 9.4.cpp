
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int A, B, C, k, k1, all, s;
    printf("введите целые положительные числа через пробел (А, В и С)");
    scanf("%d %d %d", &A, &B, &C);
    if (A > 0 && B > 0 && C > 0) {
        k = A / C;
        k1 = B / C;
        all = k * k1;
        printf("количество квадратов, помещающихся в прямоугольник %d\n", all);
        s = A * B - all * C * C;
        printf("незанятая квадратами площадь %d", s);
    }
    else {
        printf("вы ввели отрицательное число, попробуйте снова");
    }
}


