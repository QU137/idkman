#include <stdio.h> 
#include <stdlib.h> 
void print(char* ptr) {
	for (int i = 0; ptr[i] != '\0'; i++)
		printf("%c", ptr[i]);
}
char* reall(char* ptr,int size,int sizenew) {
	char* ptr1 = (char*)malloc(sizenew);
	for (int i = 0; (i < size && i < sizenew); i++)
		*(ptr1 + i) = *(ptr+i);
	*(ptr1 + sizenew) = '\0';
	return ptr1;
}
int letter(char* line, int i) {
	if ((*(line + i) >= 'a' && *(line + i) <= 'z') || (*(line + i) >= 'A' && *(line + i) <= 'Z'))
		return 1;
	return 0;
}
void erase(char* line, int i, int step) {
	for (int j = i; *(line + j+step-1) != '\0'; j++) {
		*(line + j) = *(line + j+step);
	}
}
void firsttask(char** line, char* line2) {
	int k, len=1;
	printf("enter k ");
	while (scanf_s("%d", &k) != 1 || getchar() != '\n') {
		printf("try again\n");
		rewind(stdin);
	}
	printf("enter string \n");
	*line = (char*)calloc(len, sizeof(char));
	for (int i = 0; ; i++) {
		*(*line + i) = getchar();
		if (*(*line + i) == '\n') {
			len = i;
			*(*line + i) = '\0';
			break;
		}
		else {
			len=i+1;
			*line = reall(*line, len, (len + 1) * sizeof(char));
		}
	}
	int end = 0, start = 0;
	for (int i = len; i >= 0; i--) {
		if (!letter(*line, i) && letter(*line, i - 1))
			end = i - 1;
		if (letter(*line, i) && !letter(*line, i - 1)) {
			start = i;
			if (end - start + 1 > k) {
				erase(*line, start, end - start + 1);
				len = len - end + start - 1;
			}
			end = 0, start = 0;
		}
	}
	*line = reall(*line, len,len * (sizeof(char)));
	print(*line);;
}
void secondtask(char** line1, char* line2) {
	int len = 1,count=0;
	printf("enter string \n");
	*line1 = (char*)calloc(len, sizeof(char));
	for (int i = 0; ; i++) {
		*(*line1 + i) = getchar();
		if (*(*line1 + i) == '\n') {
			len = i;
			*(*line1 + i) = '\0';
			break;
		}
		else {
			len = i + 1;
			*line1 = reall(*line1, len, (len + 1) * sizeof(char));
		}
	}
	printf("enter the character to delete: ");
	*line2 = getchar();
	for (int i = 0; i < len; i++) {
		if (line1[0][i] == line2[0]) {
			count++;
			if (count % 2 == 0) {
				erase(*line1, i, 1);
				len--;
				i--;
			}
		}
	}
	*line1 = reall(*line1, len + count, len);
	print(*line1);
}