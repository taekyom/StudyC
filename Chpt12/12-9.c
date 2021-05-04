#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "mango tree";
	strncpy(str, "apple-pie", 5); //str을 apple-pie로 바꾸는데 5글자만 복사(apple)
	str[5] = '\0';                //배열 5번째 index에 '\0'(null) 삽입 → apple만 출력
	printf("%s\n", str);          //apple + (원본의)tree (그대로) 출력

	return 0;
}