#include <stdio.h>

void main(void)
{
	for (int dan = 1; dan <= 9; dan++)
	{
		for (int i = 1; i <= 9; i++)
		{
			printf("%d X %d = %d \n", dan, i, dan * i);
		}
		printf("\n");
	}
}


/*  (while문으로 바꾸기)
	
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