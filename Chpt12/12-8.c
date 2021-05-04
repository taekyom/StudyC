#define _CRT_SECURE_NO_WARNINGS
#include<string.h> //strcpy 함수를 사용하기 위한 인클루드
#include<stdio.h>

int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2); //strcpy(원본, 바꿀 내용)
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana");
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}