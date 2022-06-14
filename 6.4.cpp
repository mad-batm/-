#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	double x, t, y;
	printf("введите x:");
	scanf("%lf", &x);
	t = x * x;
	y = 3 * t * t * t - 6 * t - 7;
	printf("Результат =  %lf", y);

}
