#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	double a, b, c, t;
	printf("введите a:");
	scanf("%lf", &a);
	printf("введите b:");
	scanf("%lf", &b);
	printf("введите c:");
	scanf("%lf", &c);
	t = a;
	a = b;
	b = t;
	t = c;
	c = b;
	b = t;
	printf("a= %lf\n", a);
	printf("b= %lf\n", b);
	printf("c= %lf", c);

}

