#include<stdio.h>

void auto_func();
void static_func();

int main()
{
	int i;
	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (i = 0; i < 3; i++)
	{
		static_func();
	}
	return 0;
}
void auto_func()
{
	auto int a = 0; //���� ���� ���� �� �ʱ�ȭ

	a++;
	printf("%d\n", a); //a ���
}

void static_func()
{
	static int a; //���� �������� ����

	a++;
	printf("%d\n", a);
}