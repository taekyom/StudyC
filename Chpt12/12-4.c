#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str);                               //������ ���Ե� ���ڿ� �Է� �� gets(), ������� ���ڿ� �Է� �� scanf()
	printf("�Է��� ���ڿ��� %s�Դϴ�.", str);
	return 0;
}