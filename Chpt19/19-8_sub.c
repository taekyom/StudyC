#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_data(int *pa, int *pb)
{
	printf("�� ���� �Է� : ");
	scanf("%d %d", pa, pb);
}

double average(int a, int b)
{
	int total;
	double avg;

	total = a + b;
	avg = total / 2.0;

	return avg;
}