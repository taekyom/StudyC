#include<stdio.h>

int main()
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) : %d\n", res);
	res = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) : %d\n", res);
	res = !(a >= 30);
	printf("!(a >= 30) : %d\n", res);
	return 0;
}
// 10 < a < 20 : �Ϲ������� ���ϴ� �� ���� X �� ������� �� ��
// (10 < a) && (a < 20) : �ڵ� �� �ùٸ� ��