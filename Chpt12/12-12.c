#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("�տ��� 3���� ���ڸ� ���ϸ�?\n");

	printf("������ ���߿� ������ ���� �̸� : ");
	if (strcmp(str1, str2) > 0) //�� str1�� ���߿� ������~
		printf("%s\n", str1);   //str1 ���
	else						//�� str1�� ���� ������~
		printf("%s\n", str2);   //str2 ���

	return 0;
}
//strcmp(str1, str2) : str1�� ���߿� �� 1(���)
//                     str1�� ���� �� -1(����)
//					   str1 = str2 �� 0