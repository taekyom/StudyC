/*
	������ : 
	��ǥ���� ����/���� �˰���, ������ �Ǿ����� ���� �������� ����ϸ� ����
	
	��� : 
	1. �ڷ�� �߿��� pivot(����)�� ����
	2. ������ pivot�� �������� �տ��� ���� ��, �ڿ��� ū ���� ��ġ��Ŵ(����)
	3. ���ҵ� ���� ����Ʈ���� ��������� ���۽�Ŵ(��� ���� ������ �˰����� �ݺ���Ŵ)(����)
	4. ���ĵ� ���� ����Ʈ���� ����(����)

*/
#include<stdio.h>

void QuickSort(int*, int, int);

int main()
{
	int ary[] = { 3, 5, 2, 7, 1, 9, 6, 8 };
	int size = sizeof(ary) / sizeof(ary[0]);
	QuickSort(ary, 0, size - 1);

	return 0;
}

void QuickSort(int* pary, int left, int right) //pivot ���� left : ���� ����Ʈ, right : ������ ����Ʈ
{
	if (left >= right) //�׻� right�� Ŀ�� ��(������ �� �ִ� ��������)
	{
		return;
	}

	int pivot = left;
	int Lleft = pivot + 1;  //�������� �̵�
	int Lright = right;
	int temp;

	while (Lleft <= Lright) //Lleft�� Lright�� ��ü�� �ȵ� ������ �ݺ�
	{
		while (pary[Lleft] <= pary[pivot])  //������ �Ǿ��� ��(success)
		{
			Lleft++;						//Lleft�� �����ϸ鼭 �������� �̵�
		}
		while (pary[Lright] >= pary[pivot] && Lright > left) //������ �Ǿ��� ��(success)
		{
			Lright--;						//Lright�� �����ϸ鼭 ������ �̵�(�� ���������� pivot���� ���鼭 ���ϹǷ�)
		}

		if (Lleft > Lright) //Lleft�� Lright�� ��ü���� ��
		{
			temp = pary[Lright];
			pary[Lright] = pary[pivot];
			pary[pivot] = temp;
		}
		else
		{
			temp = pary[Lright];
			pary[Lright] = pary[pivot];
			pary[pivot] = temp;
		}
	}
	int k;

	for (k = 0; k < right + 1; k++)
	{
		printf("%d	", pary[k]);
	}
	printf("\n");
	QuickSort(pary, left, Lright - 1);
	QuickSort(pary, Lright + 1, right);
}
