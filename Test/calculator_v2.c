/*

	Calculator_v2.c

	Created : 2021-04-28
	Author : 이태경

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, sum, sub, mul, div;
	char c;

	printf("첫번째 수를 입력하세요 : ");
	scanf("%d", &a);

	printf("두번째 수를 입력하세요 : ");
	scanf("%d", &b);

	printf("원하는 연산을 입력하세요 : ");
	scanf(" %c", &c); //스페이스%c를 해야 제대로 값이 입력됨

	if (c == '+')
	{
		sum = a + b;
		printf("결과 : %d", sum);
	}
	else if (c == '-')
	{
		sub = a - b;
		printf("결과 : %d", sub);
	}
	else if (c == '*')
	{
		mul = a * b;
		printf("결과 : %d", mul);
	}
	else if (c == '/')
	{
		if (b == 0)
		{
			printf("연산이 불가능합니다.");
		}
		else
		{
			div = a / b;
			printf("결과 : %d", div);
		}
	}

	return 0;
}
//else는 없어도 됨