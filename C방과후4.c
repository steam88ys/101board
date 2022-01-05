#include <stdio.h>
int main() {
	double won(int);
	int r;
	scanf("%d", &r);
	printf("%f", won(r));

	return 0;
}

double won(int r) {
	double ar = r * r * 3.14;
	return ar;
}