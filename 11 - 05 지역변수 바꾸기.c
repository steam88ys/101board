#include <stdio.h>

void changeA(int* num);

void main(void)
{
	int A = 3;
	printf("�ٲٱ� �� %d \n", A);
	// �Լ��� argument�� A�� �ּҰ��� �ѱ�
	// �Ű����� num�� ���� A�� ����Ų��
	changeA(&A);
	printf("�ٲٱ� �� %d \n", A);
}

void changeA(int* num)
{
	// num�� ����Ű�� �ִ� ����(A) �ȿ� ����ִ� ���� 5�� �ٲ۴�
	*num = 5;
}