#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct input
{
	char name[100];
	char phone[100];
	int age;
}Input;

Input get(void);
void put(Input*);

int main()
{
	Input p[3];
	char n[2];
	int su;
	scanf("%d", &su);
	Input* p = (Input*)malloc(sizeof(Input) * su);
	p = (int*)realloc(p, sizeof(int) * (i + 2));
	for (int i = 0; i < su; i++) {
		*(p+i) = get();
		put(&p);
		gets(n);
		printf("\n");
	}

	free(p);

	return 0;
}

Input get(void)
{
	Input p;
	printf("이름 : ");
	gets(p.name);
	printf("전화번호 : ");
	gets(p.phone);
	printf("나이 : ");
	scanf_s("%d", &p.age);
	Input* ptr = &p;
	return *ptr;
}

void put(Input* p)
{
	printf("이름 : ");
	puts(p->name);
	printf("전화번호 : ");
	puts(p->phone);
	printf("나이 : %d\n", p->age);
}
