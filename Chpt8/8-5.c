#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h> //strcpy�� ����ϰ� ���� header

int main()
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger"); //str1�� tiger�� ����
	strcpy(str2, str1);    //str2�� str1�� ����(tiger)
	printf("%s, %s\n", str1, str2);

	return 0;
}
//strcpy : string copy ���ڿ� ����, char�� �迭�� ���ο� ���ڿ��� �����ϴ� �Լ�
//�� ���ڿ��� ���̸� �ľ��ؼ� �� ���̸�ŭ char�� �迭�� ���� : strcpy(����� �迭, ������ �迭)
//�����ϴ� ���ڿ��� �������� ũ�� X