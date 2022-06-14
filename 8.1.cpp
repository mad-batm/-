#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Russian");

	int bait, kilobait;
	printf("введите количество байт:");
	scanf("%d", &bait);

	kilobait = bait / 1024;
	printf("%d байт это %d Кбайт", bait, kilobait);
	
	return 0;

}