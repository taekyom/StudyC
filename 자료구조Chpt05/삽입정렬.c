/* 
	삽입정렬 : 두번째 자료부터 앞 자료를 비교하여 정렬
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

	for (i = 1; i < sz; i++)		   //2번째 index부터 시작하므로 i = 1부터 시작
	{
		for (j = i; j > 0; j--)		   //ex. 3번 index일 때 2, 1, 0번째 index까지 모두 비교하기 위한 조건
		{
			if (pary[j] < pary[j - 1]) //j와 j-1만 비교
			{
				temp = pary[j];
				pary[j] = pary[j - 1];
				pary[j - 1] = temp;
			}
		}

		printf("\n %d단계 : ", i);	   //정렬되는 단계를 보여줌
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


