#include<stdio.h>

struct student     //구조체 선언(예약어 구조체이름) : 함수 가질 수 X, 변수만 OK
{				   //구조체 멤버
	int num;
	double grade;
};                 //세미콜론 필수

int main()
{
	struct student s1; //struct student형 변수 선언

	s1.num = 2;        //s1의 num 멤버에 2 저장
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf\n", s1.grade);

	return 0;
}