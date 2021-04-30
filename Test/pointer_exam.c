/*

	pointerExam.c

	date : 2021-04-30
	Author : 이태경
	description : 
	1. 10개의 정수를 입력받아 배열에 저장
	2. 배열 출력
	3. 배열에 저장된 값을 9, 0/ 8, 1/ 7, 2를 교환하는 형태로 저장된 값을 교환
	(방법 : 포인터 2개를 사용하여 0번방, 9번방을 가리킴)
	4. 배열 출력


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int *pa, int size);
void swap_ary();
void print_ary();

int main()
{
	int ary[10];
	int i;
	int size = sizeof(ary) / sizeof(ary[0]);
	
	input_ary(ary, size);
	printf("\n");
	printf("바꾸기 전 : ");
	swap_ary(ary, size);

	return 0;
}

void input_ary(int *pa, int size) 
{
	int i;
	printf("10개의 정수를 입력하세요 : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &pa[i]); //&pa[i] : 배열 ary의 i번째 방주소
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]); //pa[i] : 배열 ary의 i번째 데이터
	}
	
}
void swap_ary(int* pa, int* pb)
{

}
void print_ary(int* pa, int* pb)
{

}