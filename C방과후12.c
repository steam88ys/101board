#include <stdio.h>
#include <string.h>
int main() {

	int a[3];
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}

	printf("%d", sub(a));

	return 0;

}

int sub(int *p) {

	int max = 0;

	for (int i = 0; i < 3; i++) {
		if (max < p[i]) max = p[i];
	}

	return max;
}