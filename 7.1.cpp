#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	double r, pi = 3.14;
	printf("введите значение угла в градусах:");
	scanf("%d", &a);
	if (a < 0 || a>360) {
		printf("Ошибка, введите значение заново");
	}
	else {
		r = a * pi / 180;
		printf("значение угла в радианах: %lf", r);
	}
}
