#include<stdio.h>

void main()
{
	char str[20] = "Data Structure!";
	int cnt = 0;             //for문 몇번 실행되는지 보기 위한 변수
	int i;
	
	printf("\n문자배열 str[] : ");
	for (i = 0; str[i]; i++) //조건식이 배열형태 
	{
		printf("%c", str[i]);
		cnt++;
	}
	getchar();
	printf("%d", cnt);
}