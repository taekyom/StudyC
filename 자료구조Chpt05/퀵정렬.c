/*
	퀵정렬 : 
	대표적인 분할/정복 알고리즘, 정렬이 되어있지 않은 구조에서 사용하면 빠름
	
	방법 : 
	1. 자료들 중에서 pivot(기준)을 선택
	2. 선택한 pivot을 기준으로 왼쪽에는 작은 값, 오른쪽에는 큰 값을 정렬(분할)
	3. 분할된 작은 리스트들을 재귀적으로 동작시킴(계속 같은 형태의 알고리즘을 반복시킴)(정복)
	4. 정렬된 작은 리스트들을 결합(결합)

*/
#include<stdio.h>

void QuickSort(int*, int, int);

int main()
{
	int ary[] = { 3, 5, 2, 4, 7, 6, 1, 8 }; //최초실행 시 lift == 0, lidx == 0, right == 7, rdix == 7
											//pivot의 index는 pivot == 3, value pary[pivot] == 4
	int size = sizeof(ary) / sizeof(ary[0]);

	printf("ary[] : 3, 5, 2, 4, 7, 6, 1, 8 \n\n");
	QuickSort(ary, 0, size - 1);

	return 0;
}

void QuickSort(int* pary, int left, int right) //pivot 기준 left : 왼쪽 리스트, right : 오른쪽 리스트
{
	int lidx = left, ridx = right;			   //li = left = 0, ri = right = size - 1, li와 lr은 같은 index를 나타냄
	int temp;
	int pivot = (left + right) / 2;			   //pivot을 n/2로 설정
	printf("pivot - index : %d, value : %d\n", pivot, pary[pivot]);

	while (lidx <= ridx)			      //Lleft와 Lright가 교체가 안될 때까지 반복
	{
		while (pary[lidx] < pary[pivot])  //정렬이 되었을 때(success)
		{
			lidx++;						  //pivot의 왼쪽 리스트 중 작은 값은 통과(lidx가 증가하면서 다음값으로 이동)
		}
		while (pary[ridx] > pary[pivot])  //정렬이 되었을 때(success)
		{
			ridx--;						  //pivot의 오른쪽 리스트 중 큰 값은 통과
										  //lidx가 감소하면서 앞으로 이동 → 맨 끝에서부터 pivot으로 오면서 비교
		}

		if (lidx <= ridx)				  //정렬할 조건이 되면~(lidx == ridx이면 pivot)
		{
			temp = pary[ridx];			  //찾은 리스트의 두 값을 교환(swap)하여 정렬
			pary[ridx] = pary[lidx];
			pary[lidx] = temp;
			printf("%d : %d\n", temp, pary[ridx]);
			lidx++;						  //교환 후 lidx와 ridx를 연산하여 다음 값으로 이동
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
		QuickSort(pary, left, ridx); //a : 재귀호출
	}
	if (lidx < right)
	{
		QuickSort(pary, ridx, right); //b : 재귀호출
	}
}
