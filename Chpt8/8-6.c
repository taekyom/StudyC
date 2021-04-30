#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];

	printf("문자열 입력 : ");
	gets(str);                //빈칸 포함 문자열 입력
	puts("입력된 문자열 : "); //문자열 출력+자동 개행
	puts(str);                //배열에 저장된 문자열 출력

	return 0;
}

//scanf는 입력받을 수 있지만, 빈칸이 포함되면 빈칸 전까지만 입력됨
//gets : 빈칸 포함 한줄 전체를 문자열로 입력
//puts : 빈칸 포함 한줄 전체를 문자열로 출력, 자동으로 개행시킴
//getchar : 문자 입력
//putchar : 문자 출력