#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age;
	char name[20];

	printf("���� �Է� : ");
	scanf("%d", &age);
	fgetc(stdin); //���ۿ��� �ϳ��� ���ڸ� �����ϴ� ���� �� ����� ��µǰ� ��(���� �� ���� ������ �Է¹��� �� ���� �߻�)

	printf("�̸� �Է� : ");
	gets(name);
	printf("���� : %d, �̸� : %s\n", age, name);

	return 0;
}
//scanf()-getchar()-gets()-fgetc() : �Է� ���� �Լ�
//printf()-putchar()-puts()-fputc() : ��� ���� �Լ�