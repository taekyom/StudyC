#include<stdio.h>

int main()
{
	int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}

	printf("b : %d\n", b);

	return 0;
}
//if()else if()else �� if() if() if()�� ���� ����� �����. ������ ���ڰ� ó���ӵ��� �� ����(���ڴ� 3���� ������ �� �����Ƿ�)