#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;                 //���� ������

	fp = fopen("a.txt", "r"); //a.txt ������ �б� �������� ����
	if (fp == NULL)           //fp�� �� �����͸� ���� ���� ����
	{
		printf("������ ������ �ʽ��ϴ�.\n");
		return 1;             //���α׷� ����
	}
	printf("������ ���Ƚ��ϴ�.\n");
	fclose(fp);               //���� �ݱ�

	return 0;
}
//�ü���� �ڵ������� �������� ��
//3���� stream 1. �Է� : stdin �� Ű����
//             2. ��� : stdout �� �����
//			   3. ���� : stderr �� �����