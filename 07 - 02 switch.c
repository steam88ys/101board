#include <stdio.h>

void main(void)
{
	int input;
	printf("���ڸ� �Է��ϼ���(1~8����) : ");
	scanf("%d", &input);

	//break���� ����Ͽ� switch���� ���
	switch(input) 
	{
		//if(input == 1)
	case 1:
		printf("��ī��\n");
		break;
		//else if(input == 2)
	case 2: 
		printf("������\n");
		break;
	case 3:
		printf("���̸�\n");
		break;
	case 4:
		printf("���α�\n");
		break;
	case 5: 
		printf("����Ǯ\n");
		break;
	case 6: 
		printf("�ߵ���\n");
		break;
	case 7: 
		printf("������\n");
		break;
	case 8:
		printf("�ǰ���\n");
		break;
		//else
	default:
		printf("�߸� �Է��Ͽ����ϴ�. \n");
		break;
	}
}