#include<stdio.h>

void func(); //함수원형(함수 선언) : main밑에 함수선언했기 때문에 호출하기 위해 필요

int main()
{
	func(); //func 함수 호출

	return 0;
}

void func() //입력과 출력이 없는 함수→return 없음
{
	int a = 10, b = 20;
	int res;

	res = a + b;
	printf("res = %d", res);
}