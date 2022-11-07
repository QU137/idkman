#include <stdio.h>
int main() {
	int a;
	printf("name a country\n1-Argentina\n2-Belarus\n3-Canada\n4-England\n5-France\n6-Germany\n7-Hungary\n8-Italy\n9-Spain\n");
	scanf_s("%d", &a);
	switch (a) {
	case 1:
		printf("The capital is Buenos Aires");
		break;
	case 2:
		printf("The capital is Minsk");
		break;
	case 3:
		printf("The capital is Toronto");
		break;
	case 4:
		printf("The capital is London");
		break;
	case 5:
		printf("The capital is Paris");
		break;
	case 6:
		printf("The capital is Berlin");
		break;
	case 7:
		printf("The capital is Budapest");
		break;
	case 8:
		printf("The capital is Rome");
		break;
	case 9:
		printf("The capital is Madrid");
		break;
	default:
		printf("Input error");
	}
	return 0;
}