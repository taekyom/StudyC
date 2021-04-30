#include<stdio.h>
#include<string.h>

int main()
{
	int a;    //변수 선언
	int* pa;  //* : 포인터임을 선언, 선언부분에서는 아무 기능 없음

	pa = &a;  //포인터에 a 시작주소 대입
	*pa = 10; //포인터 변수 pa가 가리키는 곳(&a)에 10 대입, 실행문에서 *은 데이터로 생각

	printf("포인터로 a값 출력 : %d\n", *pa);
	printf("변수명으로 a값 출력 : %d\n", a);

	return 0;
}