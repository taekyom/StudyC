/* 
	�������� : �ι�° �ڷ���� �� �ڷḦ ���Ͽ� ����
*/
#include<stdio.h>

void insertionSort(int*, int);
void printSort(int*, int);

int main()
{
	int ary[] = { 4, 2, 7, 5, 9, 1, 3, 8, 6 };
	int size = sizeof(ary) / sizeof(ary[0]);
	insertionSort(ary, size);

	//printSort(ary, size);
	return 0; 
}
void insertionSort(int * pary, int sz)
{
	int i, j, k, temp;

	for (i = 1; i < sz; i++)		   //2��° index���� �����ϹǷ� i = 1���� ����
	{
		for (j = i; j > 0; j--)		   //ex. 3�� index�� �� 2, 1, 0��° index���� ��� ���ϱ� ���� ����
		{
			if (pary[j] < pary[j - 1]) //j�� j-1�� ��
			{
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}

		printf("\n %d�ܰ� : ", i);	   //���ĵǴ� �ܰ踦 ������
		for (k = 0; k < sz; k++)
		{
			printf("%d	", pary[k]);
		}
	}
	printf("\n");
}

void printSort(int* pary, int sz)
{
	int i;
	for (i = 0; i < sz; i++)
	{
		printf(" ary[%d] = %d\n", i, pary[i]);
	}
}


