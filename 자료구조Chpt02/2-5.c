#include<stdio.h>

void main()
{
	int i;
	int length = 0;
	char str[50];
	
	printf("문자열을 입력하세요 : ");
	gets(str); //gets : 문자열 입력함수, str에 저장
	
	printf("\n 입력된 문자열은 \"");
	for (i = 0; str[i]; i++)
	{
		printf("%c", str[i]);
		length += 1;
	}
	printf("\" 입니다");
	printf("\n\n 입력된 문자열의 길이 = %d\n", length);

	getchar(); //바로 종료하지 않고 엔터를 치면 종료하기 위해 문자 입력 시까지 기다림
}