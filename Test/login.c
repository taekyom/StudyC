/*
	�α��� ���α׷� �����

	date : 2021-05-11
	Author : ���°�
	description : 
	1. �޸��忡 ���̵�� �н����� ����(���ϸ� : password.txt)
	2. ����ü Login ������ id, password ����� ���� ����
	3. Ű����� �Է¹��� id�� pw�� ���Ͽ� �α��� ���� �Ǻ� �޽��� ���

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>;

typedef struct 
{
	char ID[20];
	char Password[20];
}Info;

int main()
{
	Info Login;

	FILE *fp;
	int res;
	char id[20], password[20];

	fp = fopen("password.txt", "r"); //password.txt ���� �б��������� ����
	if (fp == NULL)                  //���� �����Ͱ� ���̸�(���� �������� Ȯ��)
	{
		printf("������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while(1)
	{
		res = fscanf(fp, "%s %s", &Login.ID, &Login.Password); //password.txt���Ͽ��� Login.ID�� Login.Password�� �����͸� �о��
		if (res == EOF)                                        //���� �����͸� ���� ������ EOF ��ȯ
		{
			break;
		}
	}
	//printf("%s %s\n", Login.ID, Login.Password);
	
	while(1)
	{
		printf("���̵�� �н����带 �Է��ϼ��� : ");
		scanf("%s %s", id, password);

		if (strcmp(id, Login.ID) == 0)                 //���̵� ��ġ�ϸ�
		{
			if (strcmp(password, Login.Password) == 0) //���̵�� �н����尡 ��� ��ġ�ϸ�
			{
				printf("�α��εǾ����ϴ�.");
				break;
			}
			else                                       //���̵� O, �н����� X
			{
				printf("�н����尡 ��ġ���� �ʽ��ϴ�.");
			}
		}
		else                                           //���̵�X
		{
			printf("����ڸ� ã�� �� �����ϴ�. �ٽ� �Է����ּ���.");
		}
	}
	
	fclose(fp);
	
	return 0;
}