#include<stdio.h>

int main()
{
	int i;
	int ary[5] = { 10, 20, 30, 40, 50 };     //index : ary[0]~ary[4], ���(��) : 5
	int size = sizeof(ary) / sizeof(ary[0]); //int���� ũ�� 4����Ʈ, 5���� ���� ���� ary�� ũ��(��ü �迭�� ũ��)=4*5/�� 1���� ũ��=4 : 20/4=5

	for (i = 0; i < size; i++)               //�迭 ����� �� : for�� ���
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	printf("\n");

	for (i = size - 1; i >= 0; i--)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	return 0;
}