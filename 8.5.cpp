#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Russian");

	int G, G1, d, s;
	printf("введите трёхзначное число: ");
	scanf("%d", &G);

	if (G >= 100 && G <= 999) {
		d = G / 100;
		s = G % 100;
		G1 = s * 10 + d;
		printf("было %d, стало %d", G, G1);
	}
	else {
		printf("число не трёхзначное, введите его заново");
	}
	return 0;
 
}