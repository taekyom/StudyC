#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	int n, result;
	printf("\n ������ �Է��ϼ��� : ");
	scanf("%d", &n);
	result = fact(n); //fact �Լ� ȣ��
	printf("\n\n %d�� ���丮�� ���� %ld�Դϴ�.\n", n, result);
	getchar(); getchar();
}

long int fact(int n) 
{
	int value;
	if(n <= 1)        //�Է¹��� ��(n)�� 1���� ���� ��, if(n=1)�̸� �ٷ� �������� �� 1�̸� ������ ���̹Ƿ�
	{				  //��������
		printf("\n fact(1) �Լ�ȣ��!");
		printf("\n fact(1) �� 1 ��ȯ!"); 
		return 1;
	}
	else
	{
		printf("\n fact(%d) �Լ� ȣ��!", n);
		value = (n * fact(n - 1));      //��� ȣ��
		printf("\n fact(%d) �� %ld ��ȯ!", n, value);
		return value;
	}
}