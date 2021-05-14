#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int n, result;
	printf("\n 정수를 입력하세요 : ");
	scanf("%d", &n);
	result = fact(n); //fact 함수 호출
	printf("\n\n %d의 팩토리얼 값은 %ld입니다.\n", n, result);
	getchar(); getchar();
}

long int fact(int n) 
{
	int value;
	if(n <= 1)        //입력받은 값(n)이 1보다 작을 때, if(n=1)이면 바로 빠져나감 → 1이면 무조건 참이므로
	{				  //기저조건
		printf("\n fact(1) 함수호출!");
		printf("\n fact(1) 값 1 반환!"); 
		return 1;
	}
	else
	{
		printf("\n fact(%d) 함수 호출!", n);
		value = (n * fact(n - 1));      //재귀 호출
		printf("\n fact(%d) 값 %ld 반환!", n, value);
		return value;
	}
}