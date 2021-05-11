#include <stdio.h>

union student //공용체 선언
{             //공용체 멤버
	int num;
	double grade;
};

int main()
{
	union student s1 = { 3.14 }; //공용체 변수 선언 및 초기화

	printf("학번 :%d\n", s1.num);
	s1.grade = 4.4;             //grade 멤버에 4.4(값) 대입
	printf("학점 : %.1lf\n", s1.grade);
	printf("학번 : %d\n", s1.num);
	s1.num = 315;
	printf("학번 : %d\n", s1.num);
	printf("%d\n", sizeof(s1)); //공용체는 멤버 중 가장 큰 자료형을 찾아서 메모리 할당, 나머지는 할당받은 영역을 공유

	return 0;
}