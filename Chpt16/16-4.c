#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char temp[80]; //배열
	char* str[3];  //포인터 배열
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);                               //문자열 입력
		str[i] = (char*)malloc(strlen(temp) + 1); //문자열 저장 공간 할당
		strcpy(str[i], temp);                     //동적 할당 영역에 문자열 복사
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]); //동적 할당 영역 반환(해제)
	}

	return 0;
}