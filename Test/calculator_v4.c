/*

	Calculator_v4.c

	Created : 2021-04-29
	Author : ���°�
	description : ����� ���� �Լ��� �̿��� ���� �����

*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);

int main()
{
	int a, b, result;
	char c, s;

	while (1)
	{
		printf("ù��° ���� �Է��ϼ��� : ");
		scanf("%d", &a);

		printf("�ι�° ���� �Է��ϼ��� : ");
		scanf("%d", &b);

		printf("���ϴ� ������ �Է��ϼ��� : ");
		scanf(" %c", &c); //�����̽�%c�� �ؾ� ����� ���� �Էµ�

		if (c == '+')
		{
			sum(a, b); //void�� ������ �Լ��̹Ƿ� ȣ���� �Լ��� �Է��ϸ� ��(��ȯ���� �����ϱ�)
		}
		else if (c == '-')
		{
			result = sub(a, b);          //sub(a, b)��sub �Լ����� ���� a, b�� �����϶�� �ϴ� ��
			printf("��� : %d", result); //int�� ������ �Լ��̹Ƿ� printf�� main���� ���
		}
		else if (c == '*')
		{
			result = mul(a, b);
			printf("��� : %d", result);
		}
		else if (c == '/')
		{
			if (b == 0)
			{
				printf("������ �Ұ����մϴ�.");
			}
			else
			{
				result = div(a, b);
				printf("��� : %d", result);
			}
		}
		printf("\n�����ðڽ��ϱ�?(Y/N) : ");
		scanf(" %c", &s);

		if (s == 'Y') break;
	}

	return 0;
}

void sum(int a, int b) //void�� �Լ� �ȿ��� printf�� ��� ���
{
	int res;
	res = a + b;
	printf("��� : %d", res);
}

int sub(int a, int b)
{
	int res;
	res = a - b;
	return res;
}

int mul(int a, int b)
{
	int res;
	res = a * b;
	return res;
}

int div(int a, int b)
{
	int res;
	res = a / b;
	return res;
}
//����� ���� �Լ� ���� �� void ���� ����Լ��� ���� return ����; �ʿ�, void�� ���� void�� ������ �Լ� �ȿ��� pritnf()�� ���� ��� ���
//void�Լ� ��� �� : main �Լ� �ȿ����� ȣ���� ����� ���� �Լ��� �ۼ� 