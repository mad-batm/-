
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Russian");
	double x1, x2, y1, y2, a, b, P, S;
	printf("введите координаты вершины прямоугольника через пробел:\n");
	scanf("%lf %lf", &x1, &y1);
	printf("введите координаты противоположной вершины прямоугольника через пробел:\n");
	scanf("%lf %lf", &x2, &y2);
	a = sqrt((y2 - y1) * (y2 - y1));
	b = sqrt((x2 - x1) * (x2 - x1));
	P = 2 * (a + b);
	S = a * b;
	printf("Периметр прямоугольника = %lf\n", P);
	printf("Площадь прямоугольника = %lf", S);
	return 0;

}


