#include<stdio.h>

int main()
{
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *pa); //pa가 가리키는 배열 요소 출력
		pa++;               //다음 배열 요소 가리키도록 pa값 증가시킴
	}
	return 0;
}

//int ary[3]; 
//int* pa = ary;
//sizeof(ary); : 12바이트(배열 전체 크기)
//sizeof(pa); : 4바이트(포인터 하나의 크기)