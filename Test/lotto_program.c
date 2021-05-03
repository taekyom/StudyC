/*
	로또 프로그램

	Date : 2021-05-03
	Author : 이태경
	Description :
	1. 로또번호를 저장할 수 있는 배열 선언 : lotto[6]
	2. 로또번호 입력 : 처음으로 번호 입력 시 동일한 번호인지 검사 후 입력시킴
					   동일한 번호 입력 시 에러 메세지 출력하고 다시 입력  
					   input_lotto(), print_lotto()
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;;

void input_lotto(int* lotto, int size);
void print_lotto(int* lotto, int size);

int main()
{
	int lotto[6];

	input_lotto(lotto, sizeof(lotto));
	print_lotto(lotto, sizeof(lotto));

	return 0;
}

void input_lotto(int* lotto, int size)
{
	int i;     //index 번호
	int count=0; //입력횟수
	int temp;  //입력값을 저장하는 임시변수

	while (count < 6)
	{
		printf("로또 번호를 입력하세요 : ");
		scanf("%d", &temp);

		if (count == 0)      //첫번째로 입력할 때
		{
			lotto[count] = temp; //첫번째 값은 0번 index에 저장
		}
		else //두번째 입력부터~
		{
			for (i = 0; i < count; i++)    //0~5까지 6번 반복
			{
				if (temp == lotto[i])  //중복일 때
				{
					printf("중복된 번호가 존재합니다. 다른 번호를 입력하세요.\n");
					count--;
					break;
				}
				else //중복 아닐 때
				{
					lotto[count] = temp;
				}
			}
		}
		count++;
	}
}

void print_lotto(int* lotto, int size)
{
	int count;

	for (count = 0; count < 6; count++) {
		printf("당신이 선택한 로또 번호는 %d입니다.\n", lotto[count]);
	}
}