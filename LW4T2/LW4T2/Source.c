#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define lim 50
int main() {
	srand(time(NULL));
	int ch,matr[50][50],flag=0,row,col;
	printf("choose way of input(1-random, 0-keyboard) ");
	while (scanf_s("%d", &ch) != 1 || (ch != 0 && ch != 1)) {
		printf("wrong input\n");
		rewind(stdin);
	}
	printf("input number of rows in matrix ");
	while (scanf_s("%d", &row) != 1 || row < 0 || row > 50) {
		printf("wrong input\n");
		rewind(stdin);
	}
	printf("input number of columns in matrix ");
	while (scanf_s("%d", &col) != 1 || col < 0 || col > 50) {
		printf("wrong input\n");
		rewind(stdin);
	}
	if (ch == 1) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				matr[i][j] = rand() % (lim + 1);
				printf("%d ",matr[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	else {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				printf("input %d row %d column element", i+1, j+1);
				while (scanf_s("%d", &matr[i][j]) != 1){
					printf("wrong input\n");
					rewind(stdin);
				}
			}
		}
	}
	for (int i = 0; i < row; i++) {
		if (flag == 1)
			break;
		for (int j = 0; j < col - 1; j++){
			if(matr[i][j]<matr[i][j+1])
				for (int k = j + 1; k > 0; k--) {
					if (matr[i][k - 1] < matr[i][k]) {
						int buff = matr[i][k];
						matr[i][k] = matr[i][k - 1];
						matr[i][k - 1] = buff;
					}
					else {
						flag = 1;
						break;
					}
				}
		}
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d ", matr[i][j]);
		}
		printf("\n");
	}
	return 0;
}