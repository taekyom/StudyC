#include<stdio.h>

int main()
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa); //pa�� ����Ű�� �迭 ��� ���
		pa++;               //���� �迭 ��� ����Ű���� pa�� ������Ŵ
	}
	return 0;
}

//int ary[3]; 
//int* pa = ary;
//sizeof(ary); : 12����Ʈ(�迭 ��ü ũ��)
//sizeof(pa); : 4����Ʈ(������ �ϳ��� ũ��)