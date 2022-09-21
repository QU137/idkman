#include <stdio.h>
float pow(float a, int b) {
	if (b < 0)
		return pow(a, -b);
	float res = 1;
	while (b > 0) {
		b--;
		res = res * a;
	}
	return res;
}
int fact(int a) {
	if (a == 1)
		return 1;
	return a * fact(a - 1);
}
int main() {
	int n = 1;
	float x = 0, sums = 0, sumc = 0, X = 0;
	printf("Input x in degrees:");
	scanf_s("%f", &x);
	printf("Input number of iterations for accuracy:");
	scanf_s("%d", &n);
	if (n < 1) {
		printf("Input error");
		return 0;
	}
	X = (x * 3.14159265) / 180;
	for (int i = 1; i <= n; i++) {
		sums = sums + (pow(X, 2 * i - 1) * pow(-1, i + 1)) / fact(2 * i - 1);
		sumc = sumc + (pow(X, 2 * i - 2) * pow(-1, i + 1)) / fact(2 * i - 2);
	}
	printf("Tangens of x equals %f", sums / sumc);
	return 0;
}