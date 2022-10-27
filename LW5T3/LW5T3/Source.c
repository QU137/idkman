#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
//кол-во различных элементов выше глав диагонали
void main() {
	int** a, *val, N, M, diff = 0;
	printf("input number of rows  ");
	while (scanf_s("%d", &N) != 1 || N < 1 || getchar() != '\n') {
		printf("error\n");
		rewind(stdin);
	}
	printf("input number of columns  ");
	while (scanf_s("%d", &M) != 1 || M < 1 || getchar() != '\n') {
		printf("error\n");
		rewind(stdin);
	}
	a = (int**)calloc(N,sizeof(int*));
	val = (int*)calloc(N*M/2, sizeof(int));
	for (int i = 0; i < N; i++)
		*(a + i) = (int*)calloc(M,sizeof(int));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			printf("input %d %d element ", i + 1, j + 1);
			while (scanf_s("%d", *(a + i) + j) != 1|| *(*(a + i) + j)<1|| *(*(a + i) + j)>99 || getchar() != '\n') {
				printf("error\n");
				rewind(stdin);
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) 
			printf("%4d ", *(*(a + i) + j));
		printf("\n");
	}
	for (int i = 0; i < N; i++) {
		for (int j = i; j < M; j++) {
			int flag = 0;
			for (int k = 0; k < diff; k++) {
				if (*(*(a + i) + j) == *(val + k)){
					flag++;
					break;
				}
			}
			if (flag > 0)
				break;
			*(val + diff) = *(*(a + i) + j);
			diff++;
		}
	}
	printf("%d of different numbers",diff);
	for (int i = 0; i < N; i++)
		free(*(a + i));
	free(a);
}