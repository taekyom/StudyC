#include<stdio.h>

int main()
{
	char* ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; 
	//포인터 배열(p와 p))(1차원 배열이고 자료형이 포인터(char* )) : 각각의 단어의 주소를 저장하는 배열
	int count;

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
	print_str(ptr_ary, count);

	return 0;
}

void print_str(char** pps, int cnt) //포인터 배열을 받는 입력값(이미 포인터를 갖고 있으므로)으로 **pps(이중포인터) 사용
{
	int i;

	for (i = 0; i < cnt; i++)
	{
		printf("%s\n", pps[i]);
	}
}