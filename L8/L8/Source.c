#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>
//отсорт методом вставок массив строк по кол-ву слов из чётного кол-ва символов
void main(int argc, char** argv) {
	if (argc < 2) {
		printf("No arguments, restart");
		return;
	}
	printf("Your arguments, sorted by amount of words of even number of characters:\n");
	sortinsert(argc, argv);
	type(argc, argv);
}