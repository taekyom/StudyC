#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;

	printf("몇 단을 출력할까요? : ");
	scanf("%d", &n);

	for (i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}

	return 0;
}

//사용자가 입력하는 값(n)에 따라 구구단이 달라짐