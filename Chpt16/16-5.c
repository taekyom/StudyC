#define _CRT_SECURE_NO_WARNINGS
#include<Stdio.h>
#include<stdlib.h>

void print_str(char **ps);

int main()
{
	char temp[80];
	char* str[21] = { 0 }; //������ �迭(������ 2��), �� �����ͷ� �ʱ�ȭ({ 0 })
	int i = 0;

	while (i < 20)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);                              //gets : ���ڿ� �Է�, ���� ��
		if (strcmp(temp, "end") == 0) break;     //end�� �ԷµǸ� �ݺ� ���� �� while�� Ż��(break�� ���� ����� �ݺ��� Ż��)
		str[i] = (char*)malloc(strlen(temp) + 1);//���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp);                    //���� �Ҵ� ������ ���ڿ� ����
		i++;
	}
	print_str(str);

	for (i = 0; str[i] != NULL; i++) //str�� ����� ���ڿ��� ���� ������
	{
		free(str[i]);                //���� �Ҵ� ���� ��ȯ(����)
	}

	return 0;
}

void print_str(char **ps)            //�Է�O, ���X, 2�� �����ͷ�(������ �迭�̹Ƿ�) str[21]�� �Է¹���
{
	while (*ps != NULL)              //ps : ���ڿ��� �ּҰ�, ������ �迭�� ���� �� �����Ͱ� �ƴ� ���� �ݺ�
	{
		printf("%s\n", *ps);         //ps : ������ �迭�� ���
		ps++;                        //ps�� ���� �迭 ��Ҹ� ����Ŵ
									 //while���� for��ó�� ����ϱ� ���ؼ��� �������� �ʿ�
	}
}