/*
	Ÿ��������02
	���ĵ� �ζ� ��÷��ȣ answer_number
	���ĵ� ���Թ�ȣ my_number
	confirm_1st : ��÷���� �ƴ����� Ȯ���ϴ� �Լ�
*/

#include <stdio.h>

int confirm_1st(void);

void main(void)
{

	// �ζǹ�ȣ(�������� ����)
	int answer_number[6] = { 2, 3, 8, 11, 15, 41 };
	// �ڽ��� ������ ��ȣ(�������� ����)
	int my_number[6] = { 2, 3, 8, 11, 15, 41 };

	if (confirm_1st(answer_number, my_number)) {
		printf("1� ��÷�Ǿ����ϴ�. \n");
	}
}

int confirm_1st(int answer[6], int my[6])
{
	for (int i = 0; i < 6; i++) {
		if (answer[i] != my[i])
			return 0;
	}
	return 1;
}