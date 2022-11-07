#include <stdio.h>
int main() {
	int c1 = 130, c2 = 160, t = 3000;
	printf("Target=%dkg\nContainer1=%dkg\nContainer2=%dkg\n", t, c1, c2);
	for (int i = 0; c1 * i < t; i++) {
		for (int j = 0; c2 * j < t; j++) {
			if (c1 * i + c2 * j == t) {
				printf("%d containers 1\n%d containers 2", i, j);
				return 0;
			}

		}
	}

	printf("No possible way found");
	return 0;
}