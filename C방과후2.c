// main() ���� �Է�, �Է� ���� ���� ������ ���
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