#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
//удалить 0 из каждой строки
void main() {
	int** a, row,n;
	printf("input number of rows  ");
	while (scanf_s("%d", &row) != 1 || row < 1 || getchar() != '\n') {
		printf("Error\n");
		rewind(stdin);
	}
	a = (int**)calloc(row, sizeof(int*));
	for (int i = 0; i < row; i++) {
		printf("input amount of numbers in %d row  ", i + 1);
		while (scanf_s("%d", &n) != 1 || n < 1 || getchar() != '\n') {
			printf("Error\n");
			rewind(stdin);
		}
		*(a + i) = (int*)calloc(n, sizeof(int));
		printf("input numbers in row, -100 will be added automatically\n");
		for (int j = 0; j < n - 1; j++) {
			while (scanf_s("%d", *(a+i)+j) != 1|| *(*(a + i) + j)==-100|| getchar() != '\n') {
				printf("Error\n");
				rewind(stdin);
			}
		}
		*(*(a + i) + n - 1) = -100;
	}
	show(a, row);
	printf("\n\n\n");
	for (int i = 0; i < row; i++) {
		for (int j = 0; *(*(a + i) + j)!=-100; j++) {
			if (*(*(a + i) + j) == 0) {
				move(*(a + i) + j);
				j--;
			}
		}
	}
	show(a, row);
}