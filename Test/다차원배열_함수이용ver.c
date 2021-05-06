/*
	1. 5�� �л��� 4����(����, ����, ����, ü��)������ �Է¹޴´�.(2���� �迭 ���)
	2. ���κ� ������ ����� ���Ѵ�.(����� �Ҽ��� ù°�ڸ�����)
	3. ���� ������ ����� ���Ѵ�.

	date : 2021-05-06
	.ver2
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void student_score(int (*pa)[4]);
void subject_score(int (*pa)[4]);

int main()
{
	int score[5][4]; //5�� 4���� : 2���� �迭
	int i, j;
	int total;       //����
	double avg;      //���

	for (i = 0; i < 5; i++)     //�л� ����ŭ : 5
	{
		printf("%d��° �л��� ����, ����, ����, ü�� ������ �Է��ϼ��� : ", i + 1);

		for (j = 0; j < 4; j++) //���� ����ŭ : 4
		{
			scanf("%d", &score[i][j]);
		}
	}
	printf("\n");
	student_score(score);
	printf("\n");
	subject_score(score);

	return 0;
}

//���κ�
void student_score(int (*pa)[4])//main�� score�Լ��� �޴� �迭 ������(2���� �迭�̹Ƿ�)
{
	int i, j, total;
	double avg;

	for (i = 0; i < 5; i++)     //�л���
	{
		total = 0;

		for (j = 0; j < 4; j++) //�����
		{
			total += pa[i][j];  //������ pa�� score�Լ� ����
		}
		avg = total / 4.0;
		printf("%d��° �л��� ���� : %d, ��� : %.1lf\n", i + 1, total, avg);
	}
}

//����
void subject_score(int (*pa)[4])//main�� score�Լ��� �޴� �迭 ������(2���� �迭�̹Ƿ�)
{
	int i, j, total;
	double avg;

	printf("����, ����, ����, ü�� ���Դϴ�.\n");
	for (i = 0; i < 4; i++)     //�л��� 
	{
		total = 0;

		for (j = 0; j < 5; j++) //�����
		{
			total += pa[i][j];  //������ pa�� score�Լ� ����
		}
		avg = total / 5.0;
		printf("���� ���� : %d, ��� : %.1lf\n", total, avg);
	}
}