#include<stdio.h>
#include<string.h>

int main()
{
	int a;
	double b;
	char c;

	printf("int형 변수의 주소 : %u\n", &a);    //주소연산자&을 사용해 주소 계산
	printf("double형 변수의 주소 : %u\n", &b); //%u : 양수 출력, %p : pointer로 출력(보통 주소는 pointer로 출력)
	printf("char형 변수의 주소 : %u\n", &c);

	return 0;
}

//주소 : 할당된 메모리의 시작 주소, 주소연산자&을 사용해 주소 계산