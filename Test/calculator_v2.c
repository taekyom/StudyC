/*

	Calculator_v2.c

	Created : 2021-04-28
	Author : ���°�

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, sum, sub, mul, div;
	char c;

	printf("ù��° ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf("%d", &b);

	printf("���ϴ� ������ �Է��ϼ��� : ");
	scanf(" %c", &c); //�����̽�%c�� �ؾ� ����� ���� �Էµ�

	if (c == '+')
	{
		sum = a + b;
		printf("��� : %d", sum);
	}
	else if (c == '-')
	{
		sub = a - b;
		printf("��� : %d", sub);
	}
	else if (c == '*')
	{
		mul = a * b;
		printf("��� : %d", mul);
	}
	else if (c == '/')
	{
		if (b == 0)
		{
			printf("������ �Ұ����մϴ�.");
		}
		else
		{
			div = a / b;
			printf("��� : %d", div);
		}
	}

	return 0;
}
//else�� ��� ��