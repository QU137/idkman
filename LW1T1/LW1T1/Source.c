#include <stdio.h>
int main() {
	int sum = 0, a, n, d;
	printf("input first number, progression step and amount of numbers\n");
	scanf_s("%d%d%d", &a, &d, &n);
	for (int i = 1; i <= n; i++) {
		sum = sum + a + (n - i) * d;
	}
	printf("sum is %d", sum);
	return 0;



}