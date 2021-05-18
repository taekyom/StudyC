//교재 P.558~
#include<stdio.h>

int LSearch(int* pary, int sz, int tg)
{
	int i;
	for ( i = 0; i < sz; i++)
	{
		if (pary[i] == tg) //배열 각 요소가 tg랑 같은지 비교
		{ 
			return i;	  //찾은 방의 index를 반환
		}
	}
	return -1; //-1 : 배열에 없는 값
}
int main()
{
	int index;
	int ary[] = { 3, 5, 8, 2, 7, 6, 1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	index = LSearch(ary, size, 10);
	if (index == -1)
	{
		printf("찾기 실패!\n");
	}
	else
	{
		printf("방번호 : %d\n", index);
	}
	return 0;
}