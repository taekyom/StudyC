#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pi;      //포인터 변수 선언
	int size = 5; //한번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int count = 0;
	int num;
	int i;

	pi = (int*)calloc(size, sizeof(int)); //먼저 5개의 저장 공간 할당
	while(1)
	{
		printf("양수만 입력하세요 → ");
		scanf("%d", &num);
		if (num <= 0) break;              //0 or 음수면 종료
		if (count == size)                //저장 공간을 모두 사용하면~
		{
			size += 5;                    //크기를 늘려서 재할당
			pi = (int*)realloc(pi, size * sizeof(int)); //realloc : 저장공간을 늘리거나 줄임
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi);                             //동적 할당 저장 공간 반납(해제)


	return 0;
}