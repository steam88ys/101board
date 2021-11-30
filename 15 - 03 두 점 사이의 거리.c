// printf 함수를 가지고 있음.
#include <stdio.h>
#include <math.h>

typedef struct point {
	int x;
	int y;
}Point;

double distance(Point a, Point b);

void main(void)
{
	Point p1 = { 0, 0 };
	Point p2 = { 3, 4 };
	
	printf("두 점 사이의 거리 : %lf \n", distance(p1, p2));
}

double distance(Point a, Point b) {
	return sqrt((b.x-a.x) * (b.x - a.x) + (b.y-a.y) * (b.y - a.y));
}