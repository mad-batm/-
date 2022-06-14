#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double a, b, S, P;

	printf("введите длину:\n");
	scanf("%lf", &a);
	printf("введите ширину:\n");
	scanf("%lf", &b);

	S = a * b;
	P = 2 * (a + b);

	printf("Периметр равен: %lf\n", P);
	printf("Площадь равна: %lf", S);

	return 0;
}



