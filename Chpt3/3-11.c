#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char grade;
	char name[20];

	printf("���� �Է� : ");
	scanf("%c", &grade);      //%C : ����
	printf("�̸� �Է� : ");
	scanf("%s", &name);       //%S : ���ڿ�
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);

	return 0;
}