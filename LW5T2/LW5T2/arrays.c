void show(int** a, int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; *(*(a + i) + j) != -100; j++)
			printf("%4d ", *(*(a + i) + j));
		printf("-100\n");
	}
}
void move(int* row) {
	for (int i = 0;*(row+i)!=-100; i++) 
		*(row + i)=*(row+1+i);
}