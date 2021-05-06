#include<stdio.h>

int sum(int a, int b);

int main()
{
	int (*fp)(int, int); //함수 포인터 선언 : 자료형(함수이름을 포인터로 표현)(입력, 출력); → 입력과 출력의 형태가 같아야 함
	int res;

	fp = sum;
	res = fp(10, 20);    //함수 포인터로 함수 호출
	printf("result : %d\n", res);

	return 0;
}

int sum(int a, int b)
{
	return(a + b);
}