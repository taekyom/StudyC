#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20] = "mango tree";
	strncpy(str, "apple-pie", 5); //str�� apple-pie�� �ٲٴµ� 5���ڸ� ����(apple)
	str[5] = '\0';                //�迭 5��° index�� '\0'(null) ���� �� apple�� ���
	printf("%s\n", str);          //apple + (������)tree (�״��) ���

	return 0;
}