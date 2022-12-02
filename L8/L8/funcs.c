#include <stdio.h>
#include <stdlib.h>
int is_letter(char line) {
	if ((line >= 'a' && line <= 'z') || (line >= 'A' && line <= 'Z'))
		return 1;
	return 0;
}
int len(char* line) {
	int i = 0;
	for (; line[i] != '\0'; i++);
	return i;
}
int get_words_of_even(char* line) {
	int words=0,start = 0;
	for (int i = len(line); i != 0; i--) {
		if (is_letter(line[i - 1]) && !is_letter(line[i])) {
			start = i;
			continue;
		}
		if (!is_letter(line[i - 1]) && is_letter(line[i])){
			words += ((start - i) % 2 == 0);
			start = 0;
		}
	}
		if (is_letter(line[0]) && start != 0)
			words+=(start%2==0);
	return words;
}
void swap(char** line1, char** line2) {
	char* temp = *line1;
	*line1 = *line2;
	*line2 = temp;
}
void sortinsert(int argc,char** argv) {
	if (argc == 2)
		return;
	for (int i = 1; i < argc-1;i++)
		if (get_words_of_even(argv[i])>get_words_of_even(argv[i+1])) {
			for (int j = i; get_words_of_even(argv[j]) > get_words_of_even(argv[j + 1])&&j>0; j--) {
				swap(argv + j, argv + j + 1);
			}
		}
}
void type(int argc, char** argv) {
	for (int i = 1; i < argc; i++)
		printf("%s %d\n", argv[i],get_words_of_even(argv[i]));
}