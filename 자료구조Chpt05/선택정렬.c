/*
	선택정렬 : 0번방을 최소값이라고 가정, 다른 원소들과 비교하여 정렬
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
		min = i;					 //i번째 값을 최소값으로 가정하고 반복
		for (j = i + 1; j < sz; j++) //i번째 다음값과 i번째 값을 비교해야하므로 j = i + 1
		{
			if (pary[min] > pary[j]) 
			{
				min = j;		     //min = j로 바꾸고 다시 반복
			}
		}
		//swap
		temp = pary[min];
		pary[min] = pary[i];
		pary[i] = temp;

		printf("\n %d단계 : ", i + 1);
		for (k = 0; k < sz; k++)
		{
			printf("%d	", pary[k]);
		}
	}
}