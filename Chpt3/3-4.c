#include<stdio.h>

int main()
{
	unsigned int a;    //unsigned : ����� �ִ� ������(�������) ex.����, Ű

	a = 4294967295;
	printf("%d\n", a);
	a = -1;
	printf("%u\n", a); //unsigned ��ȯ���� : %u

	return 0;
}