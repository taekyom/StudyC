/*
	Calculator_v1.c

	Created : 2021-04-28
	Author : 이태경
	description : 변수값을 지정한 상태의 계산기

*/
#include <stdio.h>

int main()
{
	int a = 98, b = 61; //변수값 지정
	int res;

	/*int sum, sub, mul, inv;*/

	/*sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = a / b;*/

	res = a + b;
	printf("a + b = %d\n", res);
	res = a - b;
	printf("a - b = %d\n", res);
	res = a * b;
	printf("a * b = %d\n", res);
	res = a / b;
	printf("a / b = %d\n", res);

	return 0;
}