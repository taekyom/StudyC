//소스파일
#include<stdio.h>    //시스템 헤더 파일 내용 복사
#include "student.h" //사용자 정의 헤더 파일 내용 복사

int main()
{
	Student a = { 315, "홍길동" }; //구조체 변수 선언 및 초기화

	printf("학번 : %d, 이름 : %s\n", a.num, a.name);

	return 0;
}