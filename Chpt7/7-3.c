#include<stdio.h>

void print_char(char, int);

int main()
{
	print_char('@', 5);
	return 0;
}

void print_char(char ch, int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		printf("%c", ch);
	}
	//return; //void일 때 return만 쓰는건 가능(반환값을 안 받는 것과 같으므로) but 출력이 없으면(void일 때) return 안 쓰는 것이 원칙 
}