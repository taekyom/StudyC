#include<stdio.h>

int main()
{
	int i;
	int ary[5] = { 10, 20, 30, 40, 50 };     //index : ary[0]~ary[4], 요소(방) : 5
	int size = sizeof(ary) / sizeof(ary[0]); //int형의 크기 4바이트, 5개의 방을 가진 ary의 크기(전체 배열의 크기)=4*5/방 1개의 크기=4 : 20/4=5

	for (i = 0; i < size; i++)               //배열 출력할 때 : for문 사용
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}
	printf("\n");

	for (i = size - 1; i >= 0; i--)
	{
		printf("ary[%d] = %d\n", i, ary[i]);
	}

	return 0;
}