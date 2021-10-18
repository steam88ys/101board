#include <stdio.h>

//반환형과 매개변수가 있다면 각각의 의미를 서술하시오
int order();

void main(void)
{
	int money = 3000;
	int coke = 700, sunny10 = 600, pocari = 800;
	int num;

	while (1)
	{
		printf("현재금액 %d\n", money);
		if (money <= 500) {
			printf("잔액이 부족합니다.");
			break;
		}
		printf("1. 코카콜라:700원\n");
		printf("2. 써니텐:600원\n");
		printf("3. 포카리스웨트:800원\n");
		printf("구매할 물건의 버튼을 입력하시오 ");
		scanf_s("%d", &num);
		// 자판기에서 물건을 주문을 하는 함수 order를 호출한다.
		// 코카콜라, 써니텐, 포카리스웨트 중 하나의 버튼을 누르면 order함수가 이를 처리한다.

		printf("\n");
		money = order(money, num, coke, sunny10, pocari);
	}
}

// money : 갖고 있는 금액, num : 자판기 번호, 그 뒤 각각은 음료 종류
int order(int money, int num, int coke, int sunny10, int pocari)
{
	if (money >= 0 && money >= 500) {
		if (num == 1) {
			money -= coke;
		}
		else if (num == 2) {
			money -= sunny10;
		}
		else if (num == 3) {
			money -= pocari;
		}
		else {
			printf("메뉴가 존재하지 않습니다.\n");
		}
	}
	return money;
}

/*
#include <stdio.h>

//반환형과 매개변수가 있다면 각각의 의미를 서술하시오
void order();

void main(void)
{
	int money = 3000;
	int coke = 700, sunny10 = 600, pocari = 800;
	int num;
	
	while (1)
	{
		printf("현재금액 %d\n", money);
		if (money <= 500) {
			printf("잔액이 부족합니다.");
			break;
		}
		printf("1. 코카콜라:700원\n");
		printf("2. 써니텐:600원\n");
		printf("3. 포카리스웨트:800원\n");
		printf("구매할 물건의 버튼을 입력하시오 ");
		scanf_s("%d", &num);
		// 자판기에서 물건을 주문을 하는 함수 order를 호출한다.
		// 코카콜라, 써니텐, 포카리스웨트 중 하나의 버튼을 누르면 order함수가 이를 처리한다.

		printf("\n");
		order(&money, num, coke, sunny10, pocari);
	}
}

// money : 갖고 있는 금액, num : 자판기 번호, 그 뒤 각각은 음료 종류
void order(int* money, int num, int coke, int sunny10, int pocari)
{
	if (*money >= 0 && *money>=500) {
		if (num == 1) {
			*money -= coke;
		}
		else if (num == 2) {
			*money -= sunny10;
		}
		else if (num == 3) {
			*money -= pocari;
		}
		else {
			printf("메뉴가 존재하지 않습니다.\n");
		}
	}
}
*/