#include<stdio.h>

struct score //구조체 선언
{
	int kor;
	int eng;
	int math;
};

int main()
{
	struct score yuni = { 90, 80, 70 }; //구조체 변수 선언
	struct score* ps = &yuni;           //구조체 포인터에 주소 저장

	printf("국어 : %d\n", (*ps).kor);   //구조체 포인터로 멤버 접근 : 데이터에 접근
	printf("영어 : %d\n", ps -> eng);   // -> : 에로우 연산자, (*ps).kor = ps -> kor
	printf("수학 : %d\n", ps -> math);

	return 0;
}