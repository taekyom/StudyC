#include<stdio.h>

void assign10();
void assign20();

int a; //전역 변수 선언, 초기화하지 않으면 전역변수는 자동으로 0으로 초기화

int main()
{
	printf("함수 호출 전 a값 : %d\n", a); //전역변수 a 출력

	assign10();
	assign20();

	printf("함수 호출 후 a값 : %d\n", a); //전역변수 a 출력

	return 0;
}

void assign10()
{
	a = 10; //전역변수 a에 10 대입
}
void assign20()
{
	int a;  //assign20 함수 내에서만 쓰이는 지역변수 a 선언(전역변수와 이름만 같음)
	a = 20; //a에 20 대입
}