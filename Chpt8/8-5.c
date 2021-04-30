#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //strcpy를 사용하게 위한 header

int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger"); //str1에 tiger를 복사
	strcpy(str2, str1);    //str2에 str1을 복사(tiger)
	printf("%s, %s\n", str1, str2);

	return 0;
}
//strcpy : string copy 문자열 복사, char형 배열에 새로운 문자열을 저장하는 함수
//새 문자열의 길이를 파악해서 그 길이만큼 char형 배열에 복사 : strcpy(저장될 배열, 저장할 배열)
//복사하는 문자열이 원본보다 크면 X