#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
//найти простые числа ДО n
void main() {
	int* a, n;
	printf("input amount of numbers(starting from 3)\n");
	while (scanf_s("%d", &n) != 1 || n < 2 || getchar() != '\n') {
		printf("error\n");
		rewind(stdin);
	}
	a = (int*)calloc(n, sizeof(int));
	for (int i = 2; i * i < n; i++)
		if (*(a + i) == 0)
			check(a, i, n);
	index(a, n);
	clean(a, &n);
	a = (int*)realloc(a, n * sizeof(int));
	printf("prime numbers:\n");
	for (int i = 2; i < n; i++)
			printf("%3d ", *(a+i));
}