#include<stdio.h>

int* sum(int a, int b);

int main()
{
	int* resp;          //resp라는 포인터 변수 선언

	resp = sum(10, 20); //반환된 주소를 resp에 저장
	printf("두 정수의 합 : %d\n", *resp); //resp가 가리키는 변수값 출력

	return 0;
}
int *sum(int a, int b)  //주소 반환 함수
{
	static int res;

	res = a + b;

	return &res;        //정적 지역 변수의 주소 반환
}