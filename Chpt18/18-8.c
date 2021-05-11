#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{ 
	FILE* ifp, *ofp;           //파일 포인터 선언
	char str[80];
	char *res;

	ifp = fopen("a.txt", "r"); //입력 파일을 읽기 전용으로 개방
	if (ifp == NULL)
	{
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w"); //출력 파일을 쓰기 전용으로 개방
	if (ofp == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while(1)
	{
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL) //반환값이 널 포인터면 종료
		{
			break;
		}
		str[strlen(str) - 1] = '\0'; //개행문자 제거
		fputs(str, ofp);
		fputs(" ", ofp);
	}

	fclose(ifp);
	fclose(ofp);

	return 0;
}