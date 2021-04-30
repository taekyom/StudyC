#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);      //%C : 문자
	printf("이름 입력 : ");
	scanf("%s", &name);       //%S : 문자열
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}