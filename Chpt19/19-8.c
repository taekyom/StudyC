#include<stdio.h>

void input_data(int*, int*);
double average(int, int);

int main()
{
	int a, b;
	double avg;
	int total;

	input_data(&a, &b); //�Լ� ȣ��, ��°��� �����Ƿ� void, �ּҰ� ����
	avg = average(a, b); //�Լ� ȣ��, ��°� �����Ƿ� void �ƴ�
	printf("%d�� %d�� ��� : %.1lf\n", a, b, avg);

	return 0;
}