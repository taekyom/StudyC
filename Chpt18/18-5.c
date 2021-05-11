#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int ch;
	while(1)
	{
		ch = fgetc(stdin); //키보드에서 문자 입력
		if (ch == EOF)     //ctrl+z로 입력 종료
		{
			break;
		}
		fputc(ch, stdout); //화면에 문자 출력
	}

	return 0;
}
//getchar() == fgetc(stdin)
//putchar(ch) == fputc(ch, stdout)