/*
	�������� : 0������ �ּҰ��̶�� ����, �ٸ� ���ҵ�� ���Ͽ� ����
*/
#include<stdio.h>

void SelectionSort(int*, int);

int main()
{
	int ary[] = { 4, 2, 7, 5, 9, 1, 3, 8, 6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	SelectionSort(ary, size);

	return 0;
}

void SelectionSort(int* pary, int sz)
{
	int i, j, k, min, temp;

	for (i = 0; i < sz - 1; i++)
	{
		min = i;					 //i��° ���� �ּҰ����� �����ϰ� �ݺ�
		for (j = i + 1; j < sz; j++) //i��° �������� i��° ���� ���ؾ��ϹǷ� j = i + 1
		{
			if (pary[min] > pary[j]) 
			{
				min = j;		     //min = j�� �ٲٰ� �ٽ� �ݺ�
			}
		}
		//swap
		temp = pary[min];
		pary[min] = pary[i];
		pary[i] = temp;

		printf("\n %d�ܰ� : ", i + 1);
		for (k = 0; k < sz; k++)
		{
			printf("%d	", pary[k]);
		}
	}
}