#include <stdio.h>
#include <string.h>
int main() {

	char a[100];
	gets(a);
	sub(a);
	printf("%d", sub(a));
	gets(a);
	printf("%d", sub(a));

	return 0;

}

int sub(char* p) {

	static int count = 0;
	for (int i = 0; i < strlen(p); i++) {
		if (*p >= 'A' && *p <= 'Z') count++;
	}

	return count;
}