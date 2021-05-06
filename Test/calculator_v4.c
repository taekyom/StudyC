/*

	Calculator_v4.c

	Created : 2021-04-29
	Author : 이태경
	description : 사용자 정의 함수를 이용한 계산기 만들기

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
	int a, b, result;
	char c, s;

	while (1)
	{
		printf("첫번째 수를 입력하세요 : ");
		scanf("%d", &a);

		printf("두번째 수를 입력하세요 : ");
		scanf("%d", &b);

		printf("원하는 연산을 입력하세요 : ");
		scanf(" %c", &c); //스페이스%c를 해야 제대로 값이 입력됨

		if (c == '+')
		{
			sum(a, b); //void로 선언한 함수이므로 호출할 함수만 입력하면 됨(반환값이 없으니까)
		}
		else if (c == '-')
		{
			result = sub(a, b);          //sub(a, b)→sub 함수한테 변수 a, b를 연산하라고 하는 것
			printf("결과 : %d", result); //int로 정의한 함수이므로 printf를 main에서 출력
		}
		else if (c == '*')
		{
			result = mul(a, b);
			printf("결과 : %d", result);
		}
		else if (c == '/')
		{
			if (b == 0)
			{
				printf("연산이 불가능합니다.");
			}
			else
			{
				result = div(a, b);
				printf("결과 : %d", result);
			}
		}
		printf("\n끝내시겠습니까?(Y/N) : ");
		scanf(" %c", &s);

		if (s == 'Y') break;
	}

	return 0;
}

void sum(int a, int b) //void는 함수 안에서 printf로 결과 출력
{
	int res;
	res = a + b;
	printf("결과 : %d", res);
}

int sub(int a, int b)
{
	int res;
	res = a - b;
	return res;
}

int mul(int a, int b)
{
	int res;
	res = a * b;
	return res;
}

int div(int a, int b)
{
	int res;
	res = a / b;
	return res;
}
//사용자 정의 함수 만들 때 void 제외 출력함수는 전부 return 변수; 필요, void일 때는 void로 정의한 함수 안에서 pritnf()를 통해 결과 출력
//void함수 사용 시 : main 함수 안에서는 호출할 사용자 정의 함수만 작성 