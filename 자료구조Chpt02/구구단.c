#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, i;
	char s;

	while (1)
	{
		printf("몇 단을 출력할까요? : ");
		scanf("%d", &n);

		for (i = 1; i < 10; i++)
		{
			printf("%d * %d = %d\n", n, i, n * i);
		}
		printf("\n종료하시겠습니까?(Y/N)\n");
		scanf(" %c", &s);
		if (s == 'Y') break;
	}

	return 0;
}
//사용자가 입력하는 값(n)에 따라 구구단이 달라짐
//종료하려면 특정 문자를 입력해야 하고 그 전까지는 무한반복