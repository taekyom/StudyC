#include<stdio.h>

struct profile //구조체 선언
{
	int age;
	double height;
};

struct student //구조체 선언
{
	struct profile pf; //profile 구조체를 멤버로 사용, 먼저 선언한 구조체는 다음 구조체의 멤버로 사용 가능(반대는 불가능)
	int id;
	double grade;
};

int main()
{
	struct student yuni; //구조체 변수 선언

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("학점 : %.1lf\n", yuni.grade);

	return 0;
}