#include<stdio.h>

int main()
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res);
	return 0;
}
// 10 < a < 20 : 일반적으로 원하는 값 도출 X → 사용하지 말 것
// (10 < a) && (a < 20) : 코딩 시 올바른 식