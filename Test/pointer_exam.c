/*

	pointerExam.c

	date : 2021-04-30
	Author : ���°�
	description : 
	1. 10���� ������ �Է¹޾� �迭�� ����
	2. �迭 ���
	3. �迭�� ����� ���� 9, 0/ 8, 1/ 7, 2�� ��ȯ�ϴ� ���·� ����� ���� ��ȯ
	(��� : ������ 2���� ����Ͽ� 0����, 9������ ����Ŵ)
	4. �迭 ���


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void input_ary(int *pa, int size);
void swap_ary();
void print_ary();

int main()
{
	int ary[10];
	int i;
	int size = sizeof(ary) / sizeof(ary[0]);
	
	input_ary(ary, size);
	printf("\n");
	printf("�ٲٱ� �� : ");
	swap_ary(ary, size);

	return 0;
}

void input_ary(int *pa, int size) 
{
	int i;
	printf("10���� ������ �Է��ϼ��� : ");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &pa[i]); //&pa[i] : �迭 ary�� i��° ���ּ�
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", pa[i]); //pa[i] : �迭 ary�� i��° ������
	}
	
}
void swap_ary(int* pa, int* pb)
{

}
void print_ary(int* pa, int* pb)
{

}