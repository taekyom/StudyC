#include<stdio.h>

int sum(int a, int b);

int main()
{
	int (*fp)(int, int); //�Լ� ������ ���� : �ڷ���(�Լ��̸��� �����ͷ� ǥ��)(�Է�, ���); �� �Է°� ����� ���°� ���ƾ� ��
	int res;

	fp = sum;
	res = fp(10, 20);    //�Լ� �����ͷ� �Լ� ȣ��
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return(a + b);
}