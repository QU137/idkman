#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lim 100
int main() {
	srand(time(NULL));
	int N,choice,matr[50][50], sum = 0;
	printf("input size of square matrix ");
	while (scanf_s("%d", &N) != 1 || N < 1 || N>50) {
		printf("wrong input\n");
		rewind(stdin);
	}
	printf("input way of input(1-rnd, 0-keyboard) ");
	while (scanf_s("%d", &choice) != 1 || (choice != 0 && choice != 1)) {
		printf("wrong input\n");
		rewind(stdin);
	}
	if (choice == 1) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				matr[i][j] = rand() % (2 * lim + 1)-lim;
				printf("%4d ", matr[i][j]);
			}
			printf("\n");
		}
	}
	N = N - N / 2;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			sum += matr[i][j];
		}
	}
	printf("sum of area 1 is %d", sum);
	return 0;
}