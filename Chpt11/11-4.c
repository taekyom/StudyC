#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char ch;
	int i;

	for (i = 0; i < 3; i++) //3�� �ݺ� �� �ݺ� Ƚ���� ���ڼ��� ���߸� ��ü �� ���
	{
		scanf("%c", &ch);   //'����'�Է�
		printf("%c", ch);   //'����' ���
	}
	return 0;
}