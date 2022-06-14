#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double x1, x2, x3, y1, y2, y3, a, b, c, S, P, p;
	printf("введите через пробел координаты первой вершины треугольника\n");
	scanf("%lf %lf", &x1, &y1);
	printf("введите через пробел координаты второй вершины треугольника\n");
	scanf("%lf %lf", &x2, &y2);
	printf("введите через пробел координаты третьей вершины треугольника\n");
	scanf("%lf %lf", &x3, &y3);
	a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	c = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	if (a + b > c && a + c > b && b + c > a) {
		P = a + b + c;
		printf("Периметр треугольника=%lf\n", P);
		p = P / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));
		printf("Площадь треугольника=%lf\n", S);
	}
	else {
		printf("Такого треугольника не существует");
	}

	return 0;

}
