#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, t;
	printf("введите a:");
	scanf("%lf", &a);
	printf("введите b:");
	scanf("%lf", &b);
	t = a;
	a = b;
	b = t;
	printf("a= %lf\n",a);
	printf("b= %lf",b);
	
}