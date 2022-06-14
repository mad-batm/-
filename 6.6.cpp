#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	double t, A, a;
	printf("введите a:");
	scanf("%lf", &a);
	t = a*a;
	A = t*t*t;
	printf("A^8 =  %lf", A);

}

