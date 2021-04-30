#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; //(조건식) ? 참 : 거짓
	printf("큰 값 : %d\n", res);

	return 0;
}