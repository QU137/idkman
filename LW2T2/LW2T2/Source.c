#include <stdio.h>
int main() {
	int prod = 1, m = 1, n = 1;
	printf("Input 0!=m<n!=0 :\n");
	scanf_s("%d%d", &m, &n);

	for (int i = 0; i <= n; i++) {
		prod = prod * (m + i);
	}
	printf("A=%d", prod);
	return 0;
}