/*

	Calculator_v3.c

	Created : 2021-04-29
	Author : 이태경

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, sum, sub, mul, div;
	char c, s;

	while (1) //계산기 연산 무한 반복, (1)이므로 true이기 때문에 무한반복
	{
		printf("첫번째 수를 입력하세요 : ");
		scanf("%d", &a);

		printf("두번째 수를 입력하세요 : ");
		scanf("%d", &b);

		printf("원하는 연산을 입력하세요 : ");
		scanf(" %c", &c); //스페이스%c를 해야 앞에 값 없이 다음 값이 제대로 입력됨

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
		printf("\n끝내시겠습니까?(Y/N) : "); //한 가지 연산 종료 후에 반복 여부를 묻고
		scanf(" %c", &s);

		if (s == 'Y') break; //if(조건식)break;를 통해 반복 종료
	}

	return 0;
}
//else는 없어도 됨