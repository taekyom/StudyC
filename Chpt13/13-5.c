#include<stdio.h>

int main()
{
	register int i;   //레지스터 변수
	auto int sum = 0; //지역변수 선언 및 초기화

	for (i = 1; i <= 10000; i++)
	{
		sum += i;     //i값 반복하여 누적
	}

	printf("%d\n", sum);
	
	return 0;
}