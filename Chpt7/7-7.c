#include<stdio.h>

void fruit(int count);

int main()
{
	fruit(1); //ó�� ȣ�� : 1�� ��

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;

	fruit(count + 1);
	printf("jam\n"); //���ȣ�� �Լ� : ���� ȣ���� ���� �ƴ� �ٷ� ������ ȣ���� ������ ���ư� �� �׷��� printf("jam\n")�� ���
}