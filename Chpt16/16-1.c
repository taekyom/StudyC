#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int)); //메모리 동적 할당 
	if(pi == NULL)                  //동적 할당에 실패하면 NULL 포인터 반환
	{
		printf("# 메모리가 부족합니다.\n");
		exit(1); //프로그램 강제종료
	}

	pd = (double*)malloc(sizeof(double));//메모리 동적 할당 

	*pi = 10; //포인터로 동적 할당 영역 사용
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi);
	printf("실수형으로 사용 : %.1lf\n", *pd);

	free(pi); //동적 할당받은 메모리 영역 반환
	free(pd);

	return 0;
}
//malloc-free : 할당 함수(출력-해제)
//new-delete : 연산자(출력-해제)
//생성자 : 초기화를 시키기 위해서 사용
//NULL : 널 포인터, 주소를 할당받지 못했기 때문에 리턴값이 없다
//exit(1) : 강제종료