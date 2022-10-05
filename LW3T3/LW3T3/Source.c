#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define lim 100
int main() {
	srand(time(NULL));
	int arr1[100], arr2[100],arr3[200], m=0, n=0,choice;
	printf("Choose random(1) or keyboard(2)\n");
	while (scanf_s("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	printf("Input the size of array 1 (increasing)\n");
	while (scanf_s("%d", &m) != 1 || m < 1 || m>100) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	if (choice == 2) {
		for (int i = 0; i < m; i++) {
			printf("Input %d element ", i + 1);
			while (scanf_s("%d", &arr1[i]) != 1) {
				printf("Wrong input\n");
				rewind(stdin);
			}
			if (i > 0)
				if (arr1[i] < arr1[i - 1])
					i--;
		}
	}
	else
		for (int i = 0; i < m; i++) {
			arr1[i] = rand() % (2 * lim+ 1) - lim;
			if (i > 0)
				if (arr1[i] <= arr1[i - 1]) {
					i--;
					continue;
				}
			printf("%d\n", arr1[i]);
		}
	printf("Choose random(1) or keyboard(2)\n");
	while (scanf_s("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	printf("Input the size of array 2(increasing)\n");
	while (scanf_s("%d", &n) != 1 || n < 1 || n>100) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	if (choice == 2) {
		for (int i = 0; i < n; i++) {
			printf("Input %d element ", i + 1);
			while (scanf_s("%d", &arr2[i]) != 1) {
				printf("Wrong input\n");
				rewind(stdin);
			}
			if (i > 0)
				if (arr2[i] < arr2[i - 1])
					i--;
		}
	}
	else
		for (int i = 0; i < n; i++) {
			arr2[i] = rand() % (2 * lim + 1) - lim;
			if (i > 0)
				if (arr2[i] <= arr2[i - 1]) {
					i--;
					continue;
				}
			printf("%d\n", arr2[i]);
		}
	int x = 0, y = 0;
	for (; x < m && y < n;)
		if (arr1[x] < arr2[y]) {
			arr3[x + y] = arr1[x];
			x++;
		}
		else {
			arr3[x + y] = arr2[y];
			y++;
		}
	if (x == m)
		for (; y < n; y++)
			arr3[x + y] = arr2[y];
	else
		for (; x < m; x++)
			arr3[x + y] = arr1[x];
	printf("\nTotal array is:\n");
	for (int b = 0; b < m + n; b++)
		printf("%d\n", arr3[b]);
	return 0;
}