#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_num();

int main()
{
	int result;

	result = get_num();             //함수 호출, 반환값을 result에 저장
	printf("반환값 : %d\n", result);
	return 0;
}

int get_num()
{
	int num;

	printf("양수 입력 : ");
	scanf("%d", &num);

	return num;
}