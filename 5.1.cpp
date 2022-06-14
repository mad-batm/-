#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double x1, y1, x2, y2;
	double R;
	printf("введите координаты первой точки через пробел:\n");
	scanf("%lf %lf", &x1, &y1);
	printf("введите координаты второй точки через пробел:\n");
	scanf("%lf %lf", &x2, &y2);
	R = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("расстояние равно: %lf", R);

	return 0;
}