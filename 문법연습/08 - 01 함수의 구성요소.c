#include <stdio.h> 

 // �� ���� ���ڸ� ���ؼ� ��ȯ�ϴ� �Լ�
 //void -> ��ȯ���� ���� -> return �� ����
double sum(int num1, int num2)   
{
	return (double)(num1 + num2) + 0.14;
}

void main(void) 
{
	double a = sum(1, 2);
	printf("%lf", a);
}

// void�϶� return �Ұ���