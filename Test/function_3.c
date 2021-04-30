/*입력이 있는 함수*/

#include <stdio.h>

void func(int aa, int ab); //함수 원형(함수선언) : 입력에 변수명 생략가능, 데이터 타입만 입력 가능

int main()
{
	int a, b;
	a = 10, b = 20;

	func(a, b); //입력이 있는 함수 호출
	return 0;
}

void func(int aa, int ab) //main에서 선언한 변수와 같은걸 입력
{
	int res;
	res = aa + ab;
	printf("res : %d", res);
}
