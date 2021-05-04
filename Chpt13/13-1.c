#include<stdio.h>

void assign();

int main()
{
	auto int a = 0; //auto 생략 가능, 원래 쓰는 int = a와 같음

	assign();       //assign 함수 호출
	printf("main 함수 a : %d\n", a);

	return 0;
}
void assign()
{
	int a;

	a = 10;
	printf("assign 함수 a : %d\n", a);
}