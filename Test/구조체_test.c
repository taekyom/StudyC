/*
	����ü test
	date : 2021-05-07
	description : 
	1. 5���� ��� ��ȣ, �̸�, �޿��� �Է¹޾� ���
	2. ��� 5���� �޿� �Ѿװ� ��� �޿����� ���϶�.
	(�̸��� �����Ҵ翡 �����Ѵ�.)
	
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{ //����ü ����
	int id;              //�����ȣ
	char* name;          //�̸�
	int salary;          //�޿�
}Employee;

int main()
{
	int i;
	int sal_sum = 0;

	Employee info[5];
	char str[20] = {'\0'};

	for (i = 0; i < 5; i++) 
	{
		printf("��� ��ȣ, �̸�, �޿��� �Է��ϼ��� :");
		scanf("%d %s %d", &(info[i].id), str, &(info[i].salary));

		info[i].name = (char*)malloc(strlen(str) + 1); //�̸��� �����Ҵ翡 ����(�迭�� ���̺��� ���)
		if (info[i].name != NULL)                      //�̸��� null�� �ƴ� ��
		{
			strcpy(info[i].name, str);                 //str�� �̸��� ����
		}
	}

	printf("��� ����");
	printf("------------------------------------------\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d %s %d\n", info[i].id, info[i].name, info[i].salary);
	}
	printf("\n");

	for (i = 0; i < 5; i++)
	{
		sal_sum += info[i].salary;
	}
	printf("����� �޿� �Ѿ� : %d\n", sal_sum);
	printf("����� ��� �޿��� : %.1lf\n", sal_sum/5.0);

	for (i = 0; i < 5; i++)
	{
		free(info[i].name); //��ȯ(����), for�� �ȿ��� �����Ҵ��� ���������Ƿ� ������ for�� �ȿ��� �̷����� ��
	}

	return 0;
}