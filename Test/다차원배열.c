/*
	1. 5�� �л��� 4����(����, ����, ����, ü��)������ �Է¹޴´�.(2���� �迭 ���)
	2. ���κ� ������ ����� ���Ѵ�.(����� �Ҽ��� ù°�ڸ�����)
	3. ���� ������ ����� ���Ѵ�.

	date : 2021-05-06
	.ver1
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[5][4]; //5�� 4����
	int i, j;
	int total;       //����
	double avg;      //���

	for (i = 0; i < 5; i++)     //�л� ����ŭ : 5
	{
		printf("%d��° �л��� ����, ����, ����, ü�� ������ �Է��ϼ��� : ", i+1);

		for (j = 0; j < 4; j++) //���� ����ŭ : 4
		{
			scanf("%d", &score[i][j]); 
		}
	}
	printf("\n");

	//�л��� ����, ���
	for (i = 0; i < 5; i++) //�л� ����ŭ : 5
	{
		total = 0;          //���� �ʱ�ȭ

		for (j = 0; j < 4; j++)   //���� ����ŭ : 4
		{
			total += score[i][j]; //�л��� ���� ����
		}
		avg = total / 4.0;        //�л��� ���

		printf("%d��° �л��� ���� : %d, ��� : %.1lf\n", i+1, total, avg);
	}
	printf("\n");

	//���� ����, ���
	for (i = 0; i < 4; i++)     //���� ����ŭ : 4
	{
		total = 0;

		for (j = 0; j < 5; j++) //�л� ����ŭ : 5
		{
			total += score[i][j];
		}
		avg = total / 5.0;
		printf("���� ���� : %d, ��� : %.1lf\n", total, avg);
	}

	return 0;
}