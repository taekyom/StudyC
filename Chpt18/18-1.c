#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;                 //파일 포인터

	fp = fopen("a.txt", "r"); //a.txt 파일을 읽기 전용으로 개방
	if (fp == NULL)           //fp가 널 포인터면 파일 개방 실패
	{
		printf("파일이 열리지 않습니다.\n");
		return 1;             //프로그램 종료
	}
	printf("파일이 열렸습니다.\n");
	fclose(fp);               //파일 닫기

	return 0;
}
//운영체제가 자동적으로 생성해줌 ↓
//3개의 stream 1. 입력 : stdin → 키보드
//             2. 출력 : stdout → 모니터
//			   3. 에러 : stderr → 모니터