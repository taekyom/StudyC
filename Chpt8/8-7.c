#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[5]; //배열이 초기화되지 않은 상태
				 //9, 10행처럼 각각 초기화할게 아니면 바로 char str[5]="OK";로 초기화하면 마지막에 NULL 넣을 필요X

	str[0] = 'O';
	str[1] = 'K';
	//str[2] = NULL; //null = \0 
	//배열 마지막에 null문자가 없기 때문에 쓰레기값 출력 → 항상 배열의 문자열 맨 끝에는 NULL을 저장!
	printf("%s\n", str);

	return 0;
}