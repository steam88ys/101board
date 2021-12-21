#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

void main(void)
{
	// 구조체 동적 할당
	Point* ptr = (Point*)malloc(sizeof(Point));
	ptr->x = 3;
	ptr->y = 4;

	// 구조체에서 직접접근
	printf("%d %d \n", a.x, a.y);

	// 포인터를 통한 간접접근
	printf("%d %d \n", (*ptr).x, (*ptr).y);	
	printf("%d %d \n", ptr->x, ptr->y);		// 축약의 느낌
}