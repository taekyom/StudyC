#include <stdio.h>

int main()
{
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);       //a < 10�̸� do{} ���ǽ��� �ݺ�, �ݺ��� ������ a ���

	printf("a : %d\n", a);

	return 0;
}
//do~while���� do���� ���� ������ �ѹ� �����ϰ� ��, ���� �Ǻ�
//do~while���� while������ ���� ����