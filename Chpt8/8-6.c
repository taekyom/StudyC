#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է� : ");
	gets(str);                //��ĭ ���� ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : "); //���ڿ� ���+�ڵ� ����
	puts(str);                //�迭�� ����� ���ڿ� ���

	return 0;
}

//scanf�� �Է¹��� �� ������, ��ĭ�� ���ԵǸ� ��ĭ �������� �Էµ�
//gets : ��ĭ ���� ���� ��ü�� ���ڿ��� �Է�
//puts : ��ĭ ���� ���� ��ü�� ���ڿ��� ���, �ڵ����� �����Ŵ
//getchar : ���� �Է�
//putchar : ���� ���