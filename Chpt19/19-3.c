#include<stdio.h>
#define SUM(a, b)((a)+(b)) //�� ���� ���ϴ� ��ũ�� �Լ�, ��ũ�� �Լ��� �� �μ����� ��ȣ�� �ʿ� �� ���ϴ� ��� ���� ����
#define MUL(a, b)((a)*(b)) //�� ���� ���ϴ� ��ũ�� �Լ�
#define TEST(a)((a)*(10))

int main()
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5); //res �ʱ�ȭ
	printf("res : %d\n", res);
	printf("%d\n", TEST(a+10));

	return 0;
}