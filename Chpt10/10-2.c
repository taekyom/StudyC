#include<stdio.h>

int main()
{
	int ary[3];
	int* pa = ary;
	int i;

	*pa = 10;              //첫번째 배열 요소에 10 대입
	*(pa + 1) = 20;        //두번째 요소에 20 대입
	pa[2] = pa[0] + pa[1]; //대괄호를 써서 pa를 배열명처럼 사용

	for (i = 0; i < 3; i++)
	{
		printf("%5d", pa[i]);
	}
	return 0;
}