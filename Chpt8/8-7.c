#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[5]; //�迭�� �ʱ�ȭ���� ���� ����
				 //9, 10��ó�� ���� �ʱ�ȭ�Ұ� �ƴϸ� �ٷ� char str[5]="OK";�� �ʱ�ȭ�ϸ� �������� NULL ���� �ʿ�X

	str[0] = 'O';
	str[1] = 'K';
	//str[2] = NULL; //null = \0 
	//�迭 �������� null���ڰ� ���� ������ �����Ⱚ ��� �� �׻� �迭�� ���ڿ� �� ������ NULL�� ����!
	printf("%s\n", str);

	return 0;
}