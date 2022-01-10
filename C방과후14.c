#include <stdio.h>
#include <string.h>
int main() {

	int a = 3;
	sub(a);
	a = 4;
	sub(a);
	a = 5;
	sub(a);
	
	return 0;

}

int sub(int a) {

	static int count = 0;
	count++;

	printf("%d번째 호출입니다.\n", count);
}