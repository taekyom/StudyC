/*
	������ : 
	��ǥ���� ����/���� �˰���, ������ �Ǿ����� ���� �������� ����ϸ� ����
	
	��� : 
	1. �ڷ�� �߿��� pivot(����)�� ����
	2. ������ pivot�� �������� ���ʿ��� ���� ��, �����ʿ��� ū ���� ����(����)
	3. ���ҵ� ���� ����Ʈ���� ��������� ���۽�Ŵ(��� ���� ������ �˰����� �ݺ���Ŵ)(����)
	4. ���ĵ� ���� ����Ʈ���� ����(����)

*/
#include<stdio.h>

void QuickSort(int*, int, int);

int main()
{
	int ary[] = { 3, 5, 2, 4, 7, 6, 1, 8 }; //���ʽ��� �� lift == 0, lidx == 0, right == 7, rdix == 7
											//pivot�� index�� pivot == 3, value pary[pivot] == 4
	int size = sizeof(ary) / sizeof(ary[0]);

	printf("ary[] : 3, 5, 2, 4, 7, 6, 1, 8 \n\n");
	QuickSort(ary, 0, size - 1);

	return 0;
}

void QuickSort(int* pary, int left, int right) //pivot ���� left : ���� ����Ʈ, right : ������ ����Ʈ
{
	int lidx = left, ridx = right;			   //li = left = 0, ri = right = size - 1, li�� lr�� ���� index�� ��Ÿ��
	int temp;
	int pivot = (left + right) / 2;			   //pivot�� n/2�� ����
	printf("pivot - index : %d, value : %d\n", pivot, pary[pivot]);

	while (lidx <= ridx)			      //Lleft�� Lright�� ��ü�� �ȵ� ������ �ݺ�
	{
		while (pary[lidx] < pary[pivot])  //������ �Ǿ��� ��(success)
		{
			lidx++;						  //pivot�� ���� ����Ʈ �� ���� ���� ���(lidx�� �����ϸ鼭 ���������� �̵�)
		}
		while (pary[ridx] > pary[pivot])  //������ �Ǿ��� ��(success)
		{
			ridx--;						  //pivot�� ������ ����Ʈ �� ū ���� ���
										  //lidx�� �����ϸ鼭 ������ �̵� �� �� ���������� pivot���� ���鼭 ��
		}

		if (lidx <= ridx)				  //������ ������ �Ǹ�~(lidx == ridx�̸� pivot)
		{
			temp = pary[ridx];			  //ã�� ����Ʈ�� �� ���� ��ȯ(swap)�Ͽ� ����
			pary[ridx] = pary[lidx];
			pary[lidx] = temp;
			printf("%d : %d\n", temp, pary[ridx]);
			lidx++;						  //��ȯ �� lidx�� ridx�� �����Ͽ� ���� ������ �̵�
			ridx--;
		}
	}
	for (int i = 0; i <= right; i++)
	{
		printf("%3d	", pary[i]);
	}
	printf("\n");
	if (left < ridx)
	{
		QuickSort(pary, left, ridx); //a : ���ȣ��
	}
	if (lidx < right)
	{
		QuickSort(pary, ridx, right); //b : ���ȣ��
	}
}
