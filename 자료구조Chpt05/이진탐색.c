//이진탐색 : 전체 배열을 반으로 나눠서 탐색, 순차탐색보다 시간이 적게 걸림
#include<stdio.h>

int BSearch(int* pary, int sz, int tg) 
{
	int first = 0;
	int last = sz - 1;
	int mid;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (tg == pary[mid])
		{
			return mid;
		}
		else
		{
			if (tg > pary[mid])
			{
				first = mid + 1;
			}
			else
			{
				last = mid - 1;
			}

		}
	}
	return -1;
}

int main()
{
	int index;
	//int ary[] = { 3, 5, 8, 2, 7, 6, 1 };
	int ary[] = { 1, 2, 3, 4, 5, 6, 7 };
	int size = sizeof(ary) / sizeof(ary[0]);
	index = BSearch(ary, size, 1);
	if (index == -1)
	{
		printf("탐색 실패!\n");
	}
	else
	{
		printf("방번호 : %d\n", index);
	}

	return 0;
}