#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];
	int age;
	char address[50];

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", &name);
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);
	printf("�ּҸ� �Է��ϼ��� : ");
	scanf("%s", &address);
	printf("%s�� ���̴� %d���̰�, �ּҴ� %s�Դϴ�.\n", name, age, address);

	return 0;
}