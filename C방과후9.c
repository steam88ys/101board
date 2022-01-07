#include <stdio.h>
#include <string.h>
int main() {

	char s1[100], s2[100] = "";

	gets(s1);
	gets(s2);

	int big = 0;

	for (int i = 0; i < strlen(s1); i++) {
		if (s1[i] >= 'A' && s1[i] <= 'Z') ++big;
	}
	for (int i = 0; i < strlen(s2); i++) {
		if (s2[i] >= 'A' && s2[i] <= 'Z') ++big;
	}

	strcat(s1, "/");
	strcat(s1, s2);

	puts(s1);
	printf("대문자의 개수 : %d", big);

	return 0;

}