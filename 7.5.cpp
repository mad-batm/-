#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float A, B, x;
	printf("уравнение вида Ax+B=0\n");
	printf("введите значение коэффициента А:");
	scanf("%f", &A);
	printf("введите значение свободного члена В:");
	scanf("%f", &B);

		x = (-1)*(A / B);
	
	printf("Ответ: x= %f", x);
}
