#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

extern int count; //main.c ������ �������� count ����(extern�� �ʱ�ȭ �Ұ��� �� ó�� ���� �� �ʱ�ȭ �� ���� ����)
int total = 0;    //�������� ����(�Լ� ���� �ƴ϶� �ۿ��� ���������Ƿ�)

int input_data()
{
	int pos;                //��� ����

	while(1)
	{
		printf("��� �Է� : ");
		scanf("%d", &pos);
		if (pos < 0) break; //������ �Է� ����
		count++;
		total += pos;
	}
	return total;
}