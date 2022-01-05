// main() 숫자 입력, 입력 받은 값의 제곱을 출력
#include <stdio.h>
int main() {
	void jegop(int);
	int a, r;
	scanf("%d", &a);
	jegop(a);
}

void jegop (int b) {
	int a, r;
	r = b * b;
	printf("%d", r);
}