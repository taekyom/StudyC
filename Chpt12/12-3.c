#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է� : ");                          //APPLE JAM �Է�
	scanf("%s", str);
	printf("ù��° �ܾ� : %s\n", str);                 //���� ������(APPLE) ���
	scanf("%s", str);
	printf("���ۿ� �����ִ� �ι�° �ܾ� : %s\n", str); //���� ���� �ܾ�(JAM) ���(APPLE�� ��µǰ� ���ۿ��� JAM�� ���������Ƿ�)

	return 0;
}