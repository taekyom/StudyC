#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�.\n", age, height);

	return 0;
}
//�迭�̸� : �ּ��̹Ƿ� �迭������ �ּҿ�����&�� ������ �ʴ´�