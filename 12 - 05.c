#include <stdio.h>

void print(int* ptr);
void erase(int* ptr);

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	erase(arr);
	print(arr);
}

// 매개변수로 배열을 넘길 수 없음 (포인터는 넘길 수 있음)
void print(int* ptr)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d", ptr[i]);
	}
	printf("\n");
}

void erase(int* ptr)
{
	for (int i = 0; i < 4; i++)
	{
		ptr[i] = 0;
	}
}