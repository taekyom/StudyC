#include<stdio.h>

void assign10();
void assign20();

int a; //���� ���� ����, �ʱ�ȭ���� ������ ���������� �ڵ����� 0���� �ʱ�ȭ

int main()
{
	printf("�Լ� ȣ�� �� a�� : %d\n", a); //�������� a ���

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a�� : %d\n", a); //�������� a ���

	return 0;
}

void assign10()
{
	a = 10; //�������� a�� 10 ����
}
void assign20()
{
	int a;  //assign20 �Լ� �������� ���̴� �������� a ����(���������� �̸��� ����)
	a = 20; //a�� 20 ����
}