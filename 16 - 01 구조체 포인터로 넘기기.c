#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

void main(void)
{
	// ����ü ���� �Ҵ�
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;

	// ����ü���� ��������
	printf("%d %d \n", a.x, a.y);

	// �����͸� ���� ��������
	printf("%d %d \n", (*ptr).x, (*ptr).y);	
	printf("%d %d \n", ptr->x, ptr->y);		// ����� ����
}