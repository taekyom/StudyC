#include<stdio.h>

int main()
{
	int income = 0;
	double tax;
	const double tax_rate = 0.12;
	//const : ������ ���ȭ�ϴ� ����, �ʱ�ȭ�� �ؾ� const�� ��밡��(����� ���ÿ� �ʱ�ȭ, �ʱ�ȭ�� ���ϸ� �����Ⱚ�� ���ȭ�ϴ� ��)

	income = 456;
	tax = income * tax_rate;
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}
