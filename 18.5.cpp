#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, i, j, t;
	cout << "Введите размер массива: ";
	cin >> n;

	int el;
	cout << "Введите первый элемент ";
	cin >> el;

	int m = n++;

	cout << "Было" << endl;
	int* mas = new int[m];
	for (i = 1; i < m; i++)
		mas[i] = rand() % 1000 - 50;


	for (i = 1; i < m - 1; i++) {
		for (j = 0; j < m - i - 1; j++) {
			if (mas[j] > mas[j + 1]) {
				t = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = t;
			}
		}
	}
	mas[0] = el;
	for (i = 0; i < m; i++)
		cout << mas[i] << " ";

	cout << endl;

	cout << "Стало" << endl;
	for (i = 0; i < m - 1; i++) {
		for (j = 0; j < m - i - 1; j++) {
			if (mas[j] > mas[j + 1]) {
				t = mas[j];
				mas[j] = mas[j + 1];
				mas[j + 1] = t;
			}
		}
	}
	for (i = 0; i < m; i++)
		cout << mas[i] << " ";

	return 0;
}

