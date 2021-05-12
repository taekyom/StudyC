/* 분할 컴파일 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_data(int *pn1, int *pn2) //주소값을 받으므로 포인터로 입력받음
{
	printf("두 정수 입력 : $ ");
	scanf("%d %d", pn1, pn2);
}

