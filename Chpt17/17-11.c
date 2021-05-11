#include<stdio.h>

enum season{SPRING, SUMMER, FALL, WINTER}; //열거형(enum) 선언, enum의 크기는 4byte로 고정

int main()
{
	enum season ss; //열거형 변수 선언
	char* pc = NULL;

	ss = SPRING;    //열거 멤버 값 대입
	switch(ss)      //열거 멤버 판단
	{
	case SPRING:
		pc = "inline"; break;
	case SUMMER:
		pc = "swimming"; break;
	case FALL:
		pc = "trip"; break;
	case WINTER:
		pc = "skiing"; break;
	}
	printf("나의 레저 활동 => %s\n", pc);
	printf("%d %d %d %d", SPRING, SUMMER, FALL, WINTER); //열거형에서 기본값은 0부터 차례로 정수화가 됨(초기화해주면 달라짐)

	return 0;
}
//숫자가 아닌 문자로 표현할 수 있으므로 가독성 향상 → 사용자 입장에서 사용하기 편리