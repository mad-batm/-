#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float S, T, V, V1, V2;
	printf("введите скорость первого автомобиля в км/ч: ");
	scanf("%f", &V1);
	printf("введите скорость второго автомобиля ч км/ч: ");
	scanf("%f", &V2);
	printf("введите начальное расстояние между ними: ");
	scanf("%f", &S);
	printf("введите сколько часов они удалялись друг от друга: ");
	scanf("%f", &T);
	V = V1 + V2;
	S = S + V * T;
	printf("расстояние между ними стало: %f", S);
}
