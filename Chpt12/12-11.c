#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2);
	if (strlen(str1) > strlen(str2)) //문자열의 길이 비교
		resp = str1;
	else
		resp = str2;
	printf("이름이 긴 과일은 : %s\n", resp);

	return 0;
}