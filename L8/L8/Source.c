#include "funcs.h"
#include <stdio.h>
#include <stdlib.h>
//������ ������� ������� ������ ����� �� ���-�� ���� �� ������� ���-�� ��������
void main(int argc, char** argv) {
	for (int i = 0; i < argc + 1; i++)
		printf("%s", argv[i]);
}