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
	//return; //void�� �� return�� ���°� ����(��ȯ���� �� �޴� �Ͱ� �����Ƿ�) but ����� ������(void�� ��) return �� ���� ���� ��Ģ 
}