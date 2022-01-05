#include <stdio.h>
int main() {
	void cal(int, int);
	int w, h;
	scanf("%d %d", &w, &h);
	cal(w, h);
	return 0;
}

void cal(int w, int h) {
	int a = w * h;
	printf("≥–¿Ã : %d", a);
}