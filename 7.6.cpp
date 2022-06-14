#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float A1, A2, B1, B2, x, y, C1, C2, det, det_x, det_y;
	printf("введите значения коэффициентов А1, В1, С1:");
	scanf("%f %f %f", &A1, &B1, &C1);
	printf("введите значения коэффициентов А2, В2, С2:");
	scanf("%f %f %f", &A2, &B2, &C2);
	det = A1 * B2 - B1 * A2;
	det_x = C1 * B2 - B1 * C2;
	det_y = A1 * C2 - C1 * A2;
	x = det_x / det;
	y = det_y / det;
	printf("Ответ: ");
	printf("x = % f", x);
	printf("y = % f", y);
	
}