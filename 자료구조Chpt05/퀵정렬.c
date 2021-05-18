/*
	퀵정렬 : 
	대표적인 분할/정복 알고리즘, 정렬이 되어있지 않은 구조에서 사용하면 빠름
	
	방법 : 
	1. 자료들 중에서 pivot(기준)을 선택
	2. 선택한 pivot을 기준으로 앞에는 작은 값, 뒤에는 큰 값을 위치시킴(분할)
	3. 분할된 작은 리스트들을 재귀적으로 동작시킴(계속 같은 형태의 알고리즘을 반복시킴)(정복)
	4. 정렬된 작은 리스트들을 결합(결합)

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

void QuickSort(int* pary, int left, int right) //pivot 기준 left : 왼쪽 리스트, right : 오른쪽 리스트
{
	if (left >= right) //항상 right가 커야 함(복귀할 수 있는 기저조건)
	{
		return;
	}

	int pivot = left;
	int Lleft = pivot + 1;  //왼쪽으로 이동
	int Lright = right;
	int temp;

	while (Lleft <= Lright) //Lleft와 Lright가 교체가 안될 때까지 반복
	{
		while (pary[Lleft] <= pary[pivot])  //정렬이 되었을 때(success)
		{
			Lleft++;						//Lleft가 증가하면서 다음으로 이동
		}
		while (pary[Lright] >= pary[pivot] && Lright > left) //정렬이 되었을 때(success)
		{
			Lright--;						//Lright가 감소하면서 앞으로 이동(맨 끝에서부터 pivot으로 오면서 비교하므로)
		}

		if (Lleft > Lright) //Lleft와 Lright가 교체됐을 때
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
