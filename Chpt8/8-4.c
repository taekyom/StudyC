#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	char str[80] = "applejam"; //={a, p, p, l, e, j, a, m}, char�� ũ�� = 1����Ʈ �� sizeof(str)=80

	printf("���� ���ڿ� : %s\n", str);
	printf("���ڿ� �Է� : ");
	scanf("%s", str);
	printf("�Է� �� ���ڿ� : %s\n", str);

	return 0;
}

//�迭�� ���ڸ� �����ϱ� ���� ���� ���� ���
//�ѱ� : 2����Ʈ, ���� : 1����Ʈ
//�迭�� ���� �˷��ִ� �� : null����(��ħǥ����) �� ����/�ܾ��� ���� null���ڰ� �� �ڸ��� �ϳ� �� �ʿ�