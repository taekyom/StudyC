#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a = 10; //지역변수 선언
	int* pa;    //포인터 변수 선언
	pa = &a;    //포인터 변수에 변수 a의 주소를 저장(포인터 pa는 a를 가리킴)
	int ary[] = { 1, 2, 3, 4, 5 };
	int* pary = ary;
	int i;

	printf("변수 a에 저장된 값 : %d\n", a);
	printf("변수 a의 주소 : %p\n", &a);
	printf("포인터 변수 pa에 저장된 값 : %p\n", pa);
	printf("변수 a에 저장된 값 : %d\n", *pa);     //*는 간접참조연산자

	for (i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\t\n", i, ary[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\t\n", i, pary[i]);   //변수 연산식
		pary[i]++;
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("ary[%d]=%d\t\n", i, *(pary + i)); //포인터 연산식
	}
	return 0;
}
