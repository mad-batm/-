#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	double a, r, pi = 3.14;
	printf("введите значение угла в радианах:");
	scanf("%lf", &r);
	if (r < 0 || r>2 * pi) {
		printf("Ошибка, введите значение заново");
	}
	else {
		a = r * 180 / pi;
		printf("значение угла в градусах: %lf", a);
	}
}
