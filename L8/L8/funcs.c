int letter(char line) {
	if ((line >= 'a' && line <= 'z') || (line >= 'A' && line <= 'Z'))
		return 1;
	return 0;
}
int len(char* line) {
	int i = 0;
	for (; line[i] != '\0'; i++);
	return i;
}
void sortinsert(int argc,char** argv) {
	for (int i = 1; i < argc;i++)
		if (len(argv[i])%2==0) {

		}
}