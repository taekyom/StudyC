#include<stdio.h>

int main()
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("�ʱⰪ a = %d, b = %d\n", a, b);
	printf("������ : (++a) * 3 = %d\n, ������ : (b++) * 3 = %d\n", pre, post);

	return 0;
}
//(++a) + a + (++a)�� ���� ������ ������ ���� : �ϳ��� ���Ŀ��� ���� ������ �� �� �̻� ����� ���� ���������� ���X 