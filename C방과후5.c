#include <stdio.h>
void prt(int n, char r)
{
	if (n % 2 == 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i; j++) {
				printf("%c", r);
			}
			printf("\n");
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= i; j++) {
				printf("%c", r);
			}
			printf("\n");
		}
	}
}

int main()
{
	void prt(int, char);
	int n;
	char r;
	scanf("%d", &n);
	scanf(" %c", &r);
	prt(n, r);
}