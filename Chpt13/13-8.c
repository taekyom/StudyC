#include<stdio.h>

int* sum(int a, int b);

int main()
{
	int* resp;          //resp��� ������ ���� ����

	resp = sum(10, 20); //��ȯ�� �ּҸ� resp�� ����
	printf("�� ������ �� : %d\n", *resp); //resp�� ����Ű�� ������ ���

	return 0;
}
int *sum(int a, int b)  //�ּ� ��ȯ �Լ�
{
	static int res;

	res = a + b;

	return &res;        //���� ���� ������ �ּ� ��ȯ
}