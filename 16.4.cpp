#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	int N, num, i;
	cout << "введите число N - размер массива" << endl;
	cin >> N;

	int* A = new int[N];

	cout << "введите значения элементов массива" << endl;
	for (i = 0; i < N; i++) {
		cin >> num;
		A[i] = num;
	}

	cout << endl;

	for (i = 0; i < N / 2; i++) {
		cout << A[i] << " " << A[N - i - 1] << " ";
	}
	if (N % 2 != 0)
		cout << A[N / 2];
	return 0;
}

