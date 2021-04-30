#include<stdio.h>

int main()
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b; //+연산 후 대입
	sub = a - b; //-연산 후 대입
	mul = a * b;
	inv = -a;   //-연산 후 대입

	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);

	return 0;
}