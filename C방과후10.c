#include <stdio.h>
#include <string.h>
int main() {

	char set[100];
	char in[100];

	printf("��й�ȣ ���� : ");
	gets(set);

	while (1) {
		printf("��й�ȣ �Է� : ");
		gets(in);
		if (strcmp(set, in)==0) {
			printf("welcome");
			break;
		}
		
	}

	return 0;

}