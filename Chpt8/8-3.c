#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score[5];
	int i;
	int total = 0;
	double avg;
	int count;

	count = sizeof(score) / sizeof(score[0]);

	for (i = 0; i < count; i++)   //i�� 0~4���� 5�� �ݺ�
	{
		scanf("%d", &score[i]);   // �� �迭 ��ҿ� ���� �Է�
	}

	for (i = 0; i < count; i++)
	{
		total += score[i];       //������ �����ؼ� ���� ���
	}
	avg = total / (double)count; //count�� double�� ��������ȯ

	for (i = 0; i < count; i++)
	{
		printf("%5d", score[i]); //���� ���
	}
	printf("\n");
	printf("��� : %.1lf\n", avg);

	return 0;
}