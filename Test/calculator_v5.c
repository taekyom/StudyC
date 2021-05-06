/*

	Calculator_v5.c

	Created : 2021-05-06
	Author : 이태경
	description : 함수 포인터를 매개변수로 한 함수를 사용한 계산기 

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int(*pa)(int, int)); //함수 포인터를 매개변수로 사용한 함수
int sum(int a, int b);
int mul(int a, int b);
int min(int a, int b);
int div(int a, int b);


int main()
{
	int calc;

	printf("1. 더하기\n");
	printf("2. 곱하기\n");
	printf("3. 빼기\n");
	printf("4. 나누기\n");
	printf("원하는 연산의 번호를 입력하세요 : ");
	scanf("%d", &calc);

	switch(calc)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(min); break;
	case 4: func(div); break;
	}

	return 0;
}

void func(int(*pa)(int, int))
{
	int a, b;
	int result;
	printf("두 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	result = pa(a, b);
	printf("결과값은 : %d\n", result);
}

int sum(int a, int b)
{
	return(a + b);
}

int mul(int a, int b)
{
	return(a * b);
}

int min(int a, int b)
{
	return(a - b);
}

int div(int a, int b)
{
	return(a / b);
}