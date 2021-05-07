#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pi; //포인터 변수 선언
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); //저장공간 20byte 할당
	if (pi == NULL)                     //메모리가 부족할 때 예외 처리 구문
	{
		printf("메모리가 부족합니다!\n");
		exit(1);                        //프로그램 종료
	}

	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);            //배열요소에 입력
		sum += pi[i];                   //배열요소 값 누적
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0));
	free(pi);                           //할당한 메모리 영역 반환(해제)

	return 0;
}