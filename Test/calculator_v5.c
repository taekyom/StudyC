/*

	Calculator_v5.c

	Created : 2021-05-06
	Author : ���°�
	description : �Լ� �����͸� �Ű������� �� �Լ��� ����� ���� 

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void func(int(*pa)(int, int)); //�Լ� �����͸� �Ű������� ����� �Լ�
int sum(int a, int b);
int mul(int a, int b);
int min(int a, int b);
int div(int a, int b);


int main()
{
	int calc;

	printf("1. ���ϱ�\n");
	printf("2. ���ϱ�\n");
	printf("3. ����\n");
	printf("4. ������\n");
	printf("���ϴ� ������ ��ȣ�� �Է��ϼ��� : ");
	scanf("%d", &calc);

	switch(calc)
	{
	case 1: func(sum); break;
	case 2: func(mul); break;
	case 3: func(min); break;
	case 4: func(div); break;
	}

	return 0;
}

void func(int(*pa)(int, int))
{
	int a, b;
	int result;
	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	result = pa(a, b);
	printf("������� : %d\n", result);
}

int sum(int a, int b)
{
	return(a + b);
}

int mul(int a, int b)
{
	return(a * b);
}

int min(int a, int b)
{
	return(a - b);
}

int div(int a, int b)
{
	return(a / b);
}