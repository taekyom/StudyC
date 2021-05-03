#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++) //3번 반복 → 반복 횟수를 문자수에 맞추면 전체 다 출력
	{
		scanf("%c", &ch);   //'문자'입력
		printf("%c", ch);   //'문자' 출력
	}
	return 0;
}