#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[3][4]; //3���� 4���� ������ ������ 2���� �迭
	int total;
	double avg;
	int i, j;

	for (i = 0; i < 3; i++)       //�л� ����ŭ �ݺ� : 3�� �ݺ�
	{
		printf("4���� ���� �Է� : ");
		for (j = 0; j < 4; j++)   //���� ����ŭ �ݺ� : 4�� �ݺ�
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (i = 0; i < 3; i++)       //�л� ����ŭ �ݺ� : 3�� �ݺ�
	{
		total = 0;                //�л� �Ѹ� ���� ������ 0���� �ʱ�ȭ
		for (j = 0; j < 4; j++)   //���� ����ŭ �ݺ� : 4�� �ݺ�
		{
			total += score[i][j]; //�л� ���� ���� ����
		}
		avg = total / 4.0;
		printf("���� : %d, ��� : %2.lf\n", total, avg);
	}

	return 0;
}
//������ �迭������ ���� �߿�, �迭[��][��]
//���� ��������, ���� ���� �Ұ���