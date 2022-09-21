#include <stdio.h>
int main() {
	float a, b, c;
	printf("input radius, length and width\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (2 * a <= b && 2 * a <= c)
		printf("The ball will fit");
	else
		printf("The ball will not fit");
	return 0;



}