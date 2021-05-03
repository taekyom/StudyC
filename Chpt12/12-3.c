#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char str[80];

	printf("문자열 입력 : ");                          //APPLE JAM 입력
	scanf("%s", str);
	printf("첫번째 단어 : %s\n", str);                 //공백 전까지(APPLE) 출력
	scanf("%s", str);
	printf("버퍼에 남아있는 두번째 단어 : %s\n", str); //공백 후의 단어(JAM) 출력(APPLE은 출력되고 버퍼에는 JAM만 남아있으므로)

	return 0;
}