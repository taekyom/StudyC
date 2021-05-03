#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num, grade;

	printf("학번 입력 : ");
	scanf("%d", &num);
	getchar();             //버퍼에 남아있는 개행문자 제거(버퍼에 저장되는 데이터 마지막에는 항상 개행문자가 존재)
	printf("학점 입력 : ");
	grade = getchar();
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}
//정수 → 문자 입력 시 개행을 문자로 인식하므로 getchar로 개행문자 제거하고 데이터 가져옴
//문자 → 정수 입력 시에는 문제 없음
//fflush도 버퍼에 개행문자 제거하는 함수