#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define a 8
#define lim 100
int main() {
	srand(time(NULL));
	int choice,flag = 0, matr[a][a], k = 0,sum=0;
	printf("choose way of input(1-random, 0-keyboard) ");
	while (scanf_s("%d", &choice) != 1|| (choice!=0 && choice != 1)) {
		printf("wrong input\n");
		rewind(stdin);
	}
	if (choice == 0) {
		for (int i = 0; i < a; i++) { 
			for (int j = 0; j < a; j++) {
				printf("\ninput %d row %d column element ", i + 1, j + 1);
				while (scanf_s("%d", &matr[i][j]) != 1) {
					printf("wrong input\n");
					rewind(stdin);
				}
			}
		}
	}
	else {
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				matr[i][j] = rand() % (2*lim + 1)-lim;
			}
		}
	}
	for (int i = 0; i < a; i++){
		printf("\n");
		for (int j = 0; j < a; j++) {
			printf("%d ", matr[i][j]);
		}
	}
	printf("\n");
	for (; k < a; k++) {
		flag = 1;
		for (int i = 0; i < a; i++)
			if (matr[k][i] != matr[i][k])
				flag = 0;
		if (flag == 1)
			printf("k(row equals column) is %d\n", k+1);
	}
	for (int k = 0; k < a; k++) {
		flag = 0;
		for (int i = 0; i < a; i++) {
			sum += matr[k][i];
			if (matr[k][i] < 0)
				flag = 1;
		}
		if (flag == 1)
			printf("sum of row %d (with negatives) is %d\n", k+1, sum);
		sum = 0;
	}
	return 0;
}