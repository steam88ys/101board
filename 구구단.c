#include <stdio.h>

void main(void)
{
	for (int dan = 2; dan <= 9; dan++)
	{
		if (dan == 4)
		{
			break;   //�ٱ��� for���� ���� break (���� 3������)
		}
		for (int i = 1; i <= 9; i++)
		{
			if (i == 5)
			{
				break; //���� for���� ���� break  (���� 4������)
			}
			printf("%d X %d = %d \n", dan, i, dan * i);
		}
		printf("\n");
	}
}


/*  (while������ �ٲٱ�)
	
	int dan=1;
	while(dan <=9)
	{
		int i=1;
		while(i<=9)
		{
			printf("%d X %d = %d \n", dan, i, dan * i);
			i++;
		}
		printf("\n");
		dan++;
	}


*/