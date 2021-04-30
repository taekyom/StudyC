#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);      //input_ary �Լ� ȣ��
	max = find_max(ary, size); //find_max �Լ� ȣ��
	printf("�迭�� �ִ밪 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	int i;
	printf("%d���� �Ǽ� �Է� : ", size);
	
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);         //&pa[i]�� ����, �Է��� �迭 ����� �ּ� ����
	}
}

double find_max(double* pa, int size) //�迭���� �ִ밪�� ã�� ��ȯ�ϴ� �Լ�
{
	double max;
	int i;

	max = pa[0];               //ù��° ����� �����͸� �ִ밪���� ����(����), ù��° ��Ҵ� max�� ���� �ʿ䰡 ����
	for (i = 0; i < size; i++) //�ι�° ��Һ��� max���� ��(�� 4�� ��)
	{
		if (pa[i] > max) 
			max = pa[i];
	}

	return max;
}
//�ִ밪�� ã�� ���� ������ �˰��� : ���� ó�� ���� �ִ밪���� �����ϰ� ������ ����� �ϳ��ϳ� ���ϴ� ��