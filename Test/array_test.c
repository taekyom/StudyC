/* 
	ȸ�� �Ǻ��ϱ�
	date : 2021.05.04
	author : ���°�

*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char word[50]; //�ܾ�� ���ڿ��̹Ƿ� �迭�� ����
	int count;
	int i;

	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", &word);
	count = strlen(word); //�˻�Ƚ��

	for (i = 0; i < count/2; i++)
	{
		if (word[i] != word[count-i-1])
		{
			printf("ȸ���� �ƴմϴ�.");
			break;
		}
		printf("ȸ���Դϴ�.");
	}
	

	return 0;
}
//�ܾ� �Է�, �Է¹��� �ܾ��� ���̸� ������ �ڸ� 
//ù���ڿ� ������ ���� ������ ck(1, n/ 2, n-1 ...), 
//ù ���ڿ� ������ ���ڰ� �ٸ��� "ȸ���� �ƴմϴ�."