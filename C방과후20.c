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
	printf("�̸� : ");
	gets(p.name);
	printf("��ȭ��ȣ : ");
	gets(p.phone);
	printf("���� : ");
	scanf_s("%d", &p.age);
	Input* ptr = &p;
	return *ptr;
}

void put(Input* p)
{
	printf("�̸� : ");
	puts(p->name);
	printf("��ȭ��ȣ : ");
	puts(p->phone);
	printf("���� : %d\n", p->age);
}
