#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int n;
	double sum = 0.0;
	puts("�Է��� �Ǽ��� ������?  "); 
	scanf("%d", &n);

	double* p = (double*)malloc(sizeof(double) * n);
	if (p == NULL) printf("allocation error");

	for (int i = 0; i < n; i++) {
		scanf("%lf", (p+i));
		sum += *(p+i);
	}
	printf("�հ� : %lf", sum);
		
	free(p);

	return 0;
}
