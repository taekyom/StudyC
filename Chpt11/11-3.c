#include <stdio.h>

int main()
{
	int ch;

	ch = getchar(); //함수가 반환하는 문자 저장
	printf("입력한 문자 : "); 
	putchar(ch);   //입력한 문자 출력
	putchar('\n');
	return 0;
}