//별로 피라미드 만들기

#include<stdio.h>

int main()
{
	int x, y, z, a;

	for (x = 0; x < 7; x++)
	{
		for (y = 6; y > x; y--) //왼쪽 여백 만드는 for문
		{
			printf(" ");
		}
		for (z = 0; z < x; z++) //왼쪽 반쪽짜리 별 만드는 for문, x=0일 때 z < x 성립 안하므로 첫 줄 공백
		{
			printf("*");
		}
		for (a = 1; a < x; a++) //오른쪽 반쪽짜리 별 만드는 for문, 맨 윗단 별 1개 찍는 for문
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}