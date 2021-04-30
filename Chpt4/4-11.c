#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);          //차례대로 연산되므로 마지막에 res에 ++b값이 저장됨

	printf("a : %d, b : %d\n", a, b);
	printf("res : %d\n", res); //그래서 res값은 ++b값인 21이 출력

	return 0;
}