#include<stdio.h>

int main()
{
	register int i;   //�������� ����
	auto int sum = 0; //�������� ���� �� �ʱ�ȭ

	for (i = 1; i <= 10000; i++)
	{
		sum += i;     //i�� �ݺ��Ͽ� ����
	}

	printf("%d\n", sum);
	
	return 0;
}