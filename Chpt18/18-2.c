#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE* fp;
	int ch;

	fp = fopen("a.txt", "r"); //�б�����(r)���� ���� ����(cf. w : ��������, a(append) : ���� �����Ϳ� �߰��� �ۼ�)
	if (fp == NULL)
	{
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;             //������ ������ ���� ���� ��Ȳ �� 1 ��ȯ
	}

	while(1)
	{
		ch = fgetc(fp);      //������ ���Ͽ��� ���� �Է�
		if (ch == EOF)       //��ȯ���� EOF(End Of File)�̸� �Է� ����
		{
			break;
		}
		putchar(ch);         //�Է��� ���ڸ� ȭ�鿡 ���
	}
	fclose(fp);

	return 0;
}
