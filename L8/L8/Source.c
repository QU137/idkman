#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>
//отсорт методом вставок массив строк по кол-ву слов из чётного кол-ва символов
void main(int argc, char** argv) {
	for (int i = 0; i < argc + 1; i++)
		printf("%s", argv[i]);
}