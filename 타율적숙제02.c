/*
	타율적숙제02
	정렬된 로또 당첨번호 answer_number
	정렬된 기입번호 my_number
	confirm_1st : 당첨인지 아닌지를 확인하는 함수
*/

#include <stdio.h>

int confirm_1st(void);

void main(void)
{
	
	// 로또번호(오름차순 정렬)
	int answer_number[6] = { 2, 3, 8, 11, 15, 41 };
	// 자신이 기입한 번호(오름차순 정렬)
	int my_number[6] = { 2, 3, 8, 11, 15, 40 };
	
	if ( confirm_1st(answer_number, my_number) ) {
		printf("1등에 당첨되었습니다. \n");
	}
}

int confirm_1st(int* answer, int* my)	// int[] answer도 가능
{
	int check_num = 0;
	for (int i = 0; i < 6; i++) {
		if (answer[i] != my[i]) break;
		check_num = i;
	}
	if (check_num == 5) return 1;
	else return 0;
}