#include <stdio.h> 
#include <stdlib.h> 
#include "funcs.h"
//Удалить слова больше k, Удалить каждый второй из символов в строке
void main() {
	int choice;
	void (*fun) (char**, char*);
	printf("Choose task 1(delete words longer than k) or 2(delete every second character)\n");
	while (scanf_s("%d", &choice) != 1  ||(choice!=1 && choice!=2) || getchar() != '\n') {
		printf("try again\n");
		rewind(stdin);
	}
	char* line1, line2;
	if (choice == 1) {
		fun = firsttask;
	}
	else {
		fun = secondtask;
	}
	fun(&line1,&line2);
}