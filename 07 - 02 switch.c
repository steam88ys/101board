#include <stdio.h>

void main(void)
{
	int input;
	printf("���ڸ� �Է��ϼ���(1~8����) : ");
	scanf("%d", &input);

	switch(input) 
	{
		//if(input == 1)
	case 1:
		printf("��ī��\n");
		//else if(input == 2)
	case 2: 
		printf("������\n");
	case 3:
		printf("���̸�\n");
	case 4:
		printf("���α�\n");
	case 5: 
		printf("����Ǯ\n");
	case 6: 
		printf("�ߵ���\n");
	case 7: 
		printf("������\n");
	case 8:
		printf("�ǰ���\n");
	default:
		printf("�߸� �Է��Ͽ����ϴ�. \n");
		//else
	}
}