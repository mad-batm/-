#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float x, A, y, a, S;
	printf("введите, сколько килограммов конфет вы видите:");
	scanf("%f", &x);
	printf("введите, сколько стоят эти килограммы в рублях:");
	scanf("%f", &A);
	a = A / x;
	printf("1 кг конфет стоит: %f\n", a);
	printf("введите, сколько килограммов конфет вы бы хотели купить:");
	scanf("%f", &y);
	S = a * y;
	printf("вам это обойдется в %f", S);
}
