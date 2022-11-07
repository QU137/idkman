void check(int* a, int i,int n) {
	for (int k = i * i; k < n; k += i)
		*(a + k) = 1;
}
void index(int* a,int n) {
	for (int i = 2; i  < n; i++)
		if (*(a + i) == 0)
			*(a + i) = i;
}
void move(int* a, int n, int i) {
	for (; i< n-1; i++) {
		*(a + i) = *(a + i + 1);
	}
}
void clean(int* a, int* n) {
	for (int i = 2; i < *n; i++)
		if (*(a + i) == 1) {
			int k = *n;
			move(a, k, i);
			(*n)--;
			i--;
		}
}