#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	double t, r, A;
	printf("введите A:");
	scanf("%lf", &A);
	t = A*A;
	r = t * A;
	t = r * t;
	r = t * t;
	A = r * t;
	printf("A^15 =  %lf", A);

}
