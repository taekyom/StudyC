#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void my_gets(char* str, int size);

int main()
{
	char str[7];

	my_gets(str, sizeof(str));             //�� ���� ���ڿ��� �Է��ϴ� �Լ�
	printf("�Է��� ���ڿ� : %s\n", str);

	return 0;
}

void my_gets(char *str, int size)
{
	int ch;
	int i = 0;

	ch = getchar();                        //ù��° ���� �Է�
	while ((ch != '\n') && (i < size - 1)) //�迭�� ũ��(7)��ŭ �Է�
	{
		str[i] = ch;                       //�Է¹��� ���ڸ� ch�� ����
		i++;
		ch = getchar();                    //���ο� ���� �Է�
	}
	str[i] = '\0';                         //�Է¹��� ���ڿ� ���� NULL���� ����
}