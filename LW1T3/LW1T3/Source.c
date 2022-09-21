#include <stdio.h>
int main() {
	float a, b, c;
	printf("input sides of triangle\n");
	scanf_s("%f%f%f", &a, &b, &c);
	if (a + b > c && a + c > b && c + b > a)
		printf("The triangle exists");
	else
		printf("The triangle does not exist");
	return 0;



}