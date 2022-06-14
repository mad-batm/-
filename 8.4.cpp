#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Russian");

	int F, l, s, F1;
	printf("введите двузначное целое число: ");
	scanf("%d", &F);

	if (F >= 10 && F <= 99) {
		l = F / 10;
		s = F % 10;
		F1 = s * 10 + l;
		printf("было %d, стало %d", F, F1);
	}
	else {
		printf("число не двузначное, введите его заново");
	}
	return 0;
	
}
