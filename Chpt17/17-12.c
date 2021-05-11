#include<stdio.h>

struct student //구조체 선언
{
	int num;
	double grade;
};

typedef struct student Student;     //Student형으로 재정의
//선언할 때 바로 재정의하는 것이 더 유용(별도로 하면 중복되므로)
//typedef struct //재정의할 것이므로 구조체 이름 생략가능
//{
//	  int num;
//	  double grade;
//}Student;
void print_data(Student* ps);

int main()
{
	Student s1 = { 315, 4.2 };      //Student형 변수의 선언과 초기화

	print_data(&s1);

	return 0;
}

void print_data(Student *ps)
{
	printf("학번 : %d\n", ps->num); //Student 포인터로 멤버에 접근
	printf("학점 : %.1lf\n", ps->grade);
}