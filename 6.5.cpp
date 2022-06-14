#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	double x, t, y;
	printf("введите x:");
	scanf("%lf", &x);
	t = (x-3)*(x-3)*(x-3);
	y = 4*t*t - 7*t +2;
	printf("Результат =  %lf", y);

}
