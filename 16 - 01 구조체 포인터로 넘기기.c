#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

void main(void)
{
	Point a = { 3, 4 };
	Point* ptr = &a;

	// ����ü���� ��������
	printf("%d %d \n", a.x, a.y);

	// �����͸� ���� ��������
	printf("%d %d \n", (*ptr).x, (*ptr).y);	
	printf("%d %d \n", ptr->x, ptr->y);		// ����� ����
}