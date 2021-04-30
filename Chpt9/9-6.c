#include<stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	double* pd;

	pd = p;
	printf("%lf\n", *pd);

	return 0;
}
//포인터끼리 연산은 가리키는 자료형이 다르면 연산 안됨 → 동일한 자료형을 사용하자!
//자료형이 다를 때 형변환을 사용한 포인터의 대입은 가능