#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void my_gets(char* str, int size);

int main()
{
	char str[7];

	my_gets(str, sizeof(str));             //한 줄의 문자열을 입력하는 함수
	printf("입력한 문자열 : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();                        //첫번째 문자 입력
	while ((ch != '\n') && (i < size - 1)) //배열의 크기(7)만큼 입력
	{
		str[i] = ch;                       //입력받은 문자를 ch에 저장
		i++;
		ch = getchar();                    //새로운 문자 입력
	}
	str[i] = '\0';                         //입력받은 문자열 끝에 NULL문자 저장
}