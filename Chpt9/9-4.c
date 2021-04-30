#include<stdio.h>

int main()
{
	int a = 10, b = 20;
	const int* pa = &a; //const : pa가 가리키는 a는 pa를 간접 참조하므로 데이터 변경 불가능, 포인터가 가리키는 곳의 데이터를 상수화(int)
	int* const pb = &b; //포인터 자체가 상수화 됨, 이때는 데이터 변경 가능

	printf("변수 a 값 : %d\n", *pa); //포인터를 간접 참조해서 a 출력
	pa = &b;
	printf("변수 b 값 : %d\n", *pa); //포인터를 간접 참조해서 b 출력
	pa = &a;
	a = 20;                          //a를 직접 참조해서 값 변경
	printf("변수 a 값 : %d\n", *pa);

	return 0;
}
//const : 사용하는 위치에 따라 용도가 달라짐(6, 7행 참고)
//strcpy(원본, 저장할 것) → 원본에 const를 입력해야함