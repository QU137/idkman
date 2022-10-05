#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lim 100
#define jump 4
int main() {
	srand(time(NULL));
	int arr[100],n, choice;
	printf("Choose random(1) or keyboard(2)\n");
	while (scanf_s("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	printf("Input the size of array\n");
	while (scanf_s("%d", &n) != 1 || n < 1 || n>100) {
		printf("Wrong input\n");
		rewind(stdin);
	}
	if (choice == 2) {
		for (int i = 0; i < n; i++) {
			printf("Input %d element ", i + 1);
			while (scanf_s("%d", &arr[i]) != 1) {
				printf("Wrong input\n");
				rewind(stdin);
			}
		}
	}
	else
		for (int i = 0; i < n; i++) {
			arr[i] = rand() % (2 * lim + 1) - lim;
			printf("%d\n", arr[i]);

		}

	for (int i = n; i > 0; i--)
		if (i% jump == 0) {
			n += 5;
			for (int j = n; j > i + 5; j--)
				arr[j] = arr[j - 5];
			for (int j = i + 1; j < i + 6; j++)
				arr[j] = 0;
		}
	for (int i = 0; i < n; i++) {
		printf("%d  ",arr[i]);
	}
	return 0;
}