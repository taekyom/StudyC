#include<stdio.h>

void func(); //�Լ�����(�Լ� ����) : main�ؿ� �Լ������߱� ������ ȣ���ϱ� ���� �ʿ�

int main()
{
	func(); //func �Լ� ȣ��

	return 0;
}

void func() //�Է°� ����� ���� �Լ���return ����
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res = %d", res);
}