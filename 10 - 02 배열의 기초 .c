#include <stdio.h>

void main(void)
{
	// �迭(array)�� ����� ���ÿ� �ʱ�ȭ
	int arr[4] = { 10, 20, 30, 40 };
	
	// �迭�� �����ּҸ� ���
	printf("%p\n", arr);

	// �迭�� �� ��ҵ��� ���
	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}
}