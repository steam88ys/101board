#include <stdio.h>
#include <string.h>
int main() {

	char set[100];
	char in[100];

	printf("비밀번호 설정 : ");
	gets(set);

	while (1) {
		printf("비밀번호 입력 : ");
		gets(in);
		if (strcmp(set, in)==0) {
			printf("welcome");
			break;
		}
		
	}

	return 0;

}