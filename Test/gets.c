#include<stdio.h>

int main()
{
	int i = 0;
	char str[20];
	char ch;

	do {                 //do~while문 : 무조건 한번 실행 후 조건 검사
		ch = getchar();  //문자 하나 입력
		str[i] = ch;     //배열 str에 저장
		i++;
	} while (ch != '\n');//입력된 문자가 개행이면 종료
	
	str[i] = '\n';       //개행 문자가 입력된 위치에 NULL 문자 저장
	printf("%s", str);
	return 0;
}