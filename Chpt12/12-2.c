#include<stdio.h>

int main()
{
	char* dessert = "apple"; //*dessert �����Ϳ� apple�� �ʱ�ȭ

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	dessert = "banana";     //���ο� ���ڿ� ����
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
	return 0;
}