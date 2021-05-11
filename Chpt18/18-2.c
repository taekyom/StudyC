#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r"); //읽기전용(r)으로 파일 개방(cf. w : 쓰기전용, a(append) : 기존 데이터에 추가로 작성)
	if (fp == NULL)
	{
		printf("파일이 열리지 않았습니다.\n");
		return 1;             //파일이 열리지 않은 예외 상황 → 1 반환
	}

	while(1)
	{
		ch = fgetc(fp);      //개방한 파일에서 문자 입력
		if (ch == EOF)       //반환값이 EOF(End Of File)이면 입력 종료
		{
			break;
		}
		putchar(ch);         //입력한 문자를 화면에 출력
	}
	fclose(fp);

	return 0;
}
