#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double A, B, C, AC, BC, d;
	printf("на числовой оси расположены точки\n");
	printf("введите их координаты через пробел:");
	scanf("%lf %lf %lf", &A, &B, &C);
	AC = C - A;
	AC = abs(AC);
	printf("длина АС = %lf \n", AC);
	BC = C - B;
	BC = abs(BC);
	printf("длина BС = %lf \n", BC);
	d = AC + BC;
	printf("сумма АС и ВС = %lf \n", d);

	return 0;
}
