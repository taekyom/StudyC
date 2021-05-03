#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int res;
	char ch;

	while(1)
	{
		res = scanf("%c", &ch); //문자 입력, ctrl+z → -1 반환 → 입력 종료
		if (res == -1) break;   //반환값이 -1이면 종료(-1=EOF(End Of File))
		printf("%d ", ch);      //입력된 문자의 아스키 코드 값 출력
	}
	return 0;
}