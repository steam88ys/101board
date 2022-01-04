#include <stdio.h>
int main(void) {
	int su;
	int sum = 0;

	while (1) {
		scanf_s("%d", &su);
		if (su % 2 == 1) {
			for (int i = 0; i <= su; i++) {
				if (i % 2 == 1) {
					sum += i;
				}
			}
			printf(">> %d\n", sum);
		}
		else if (su == 0) break;
		else {
			printf(">> %d\n", su * su * su);
		}
	}
	
	return 0;

}