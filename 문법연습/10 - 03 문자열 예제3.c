#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	// 'W'������ NULL���ڸ� �־ ���ڿ��� ����
	str[7] = '\0';
	printf("%s\n", str);
}