#include<stdio.h>

void add_ten(int* pa);

int main()
{
	int a = 10;

	add_ten(&a); //a의 주소를 주고 add_ten 함수 호출
	printf("a : %d\n", a);

	return 0;
}
void add_ten(int *pa) //포인터 pa로 a의 주소를 받음
{
	*pa = *pa + 10;  //포인터 pa가 가리키는 변수의 값 10 증가
}
//call by value(값에 의한 호출) : 원본 데이터 보존 가능, 안정성 good
//call by reference(참조에 의한 호출) : 주소 전달 방식, 원본 데이터 수정 시 용이 → call by value가 default