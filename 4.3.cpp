#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	float a, b, SR;
	printf("введите число а:\n");
	scanf("%f", &a);
	printf("введите число b:\n");
	scanf("%f", &b);
	SR = (a + b) / 2;
	printf("Среднее арифметическое этих чисел = %f", SR);
	return 0;
}

