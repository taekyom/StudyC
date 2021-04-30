#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);

int main()
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);      //input_ary 함수 호출
	max = find_max(ary, size); //find_max 함수 호출
	printf("배열의 최대값 : %.1lf\n", max);

	return 0;
}

void input_ary(double* pa, int size)
{
	int i;
	printf("%d개의 실수 입력 : ", size);
	
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);         //&pa[i]도 가능, 입력할 배열 요소의 주소 전달
	}
}

double find_max(double* pa, int size) //배열에서 최대값을 찾아 반환하는 함수
{
	double max;
	int i;

	max = pa[0];               //첫번째 요소의 데이터를 최대값으로 설정(가정), 첫번째 요소는 max와 비교할 필요가 없음
	for (i = 0; i < size; i++) //두번째 요소부터 max값과 비교(총 4번 비교)
	{
		if (pa[i] > max) 
			max = pa[i];
	}

	return max;
}
//최대값을 찾는 가장 간단한 알고리즘 : 제일 처음 값을 최대값으로 가정하고 나머지 값들과 하나하나 비교하는 것