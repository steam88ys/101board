#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	int *p, n;
	puts("number? "); scanf("%d", &n);
	p = (int *)malloc(sizeof(int)*n);
	if (p == NULL) printf("allocation error");
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);

	free(p);

	return 0;
}
