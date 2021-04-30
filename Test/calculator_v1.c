/*
	Calculator_v1.c

	Created : 2021-04-28
	Author : ÀÌÅÂ°æ

*/
#include <stdio.h>

int main()
{
	int a = 98, b = 61;
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