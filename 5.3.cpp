#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double A, B, C, AC, BC, p;
	printf("на числовой оси расположены точки, точка С расположена между А и В\n");
	printf("введите координату А\n");
	scanf("%lf", &A);
	printf("введите координату B\n");
	scanf("%lf", &B);
	printf("введите координату C\n");
	scanf("%lf", &C);
	if (B > A) {
		if (C<A || C>B) {
			printf("Ошибка, введите числа заново");
		}
		else {
			AC = abs(C - A);
			BC = abs(C - B);
			p = AC * BC;
			printf("произведение АС и ВС = %lf \n", p);
		}
	}
	else if (A>B) {
		if (C<B || C>A) {
			printf("Ошибка, введите числа заново");
		}
		else {
			AC = abs(C - A);
			BC = abs(C - B);
			p = AC * BC;
			printf("произведение АС и ВС = %lf \n", p);
		}

	}
	return 0;
}

