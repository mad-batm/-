// находит длину окружности

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Russian");
	double d, L;

	printf("введите диаметр окружности:\n");
	scanf("%lf", &d);

	float pi = 3.14;
	L = pi * d;

	printf("Длина окружности = %lf", L);
	return 0;

}
