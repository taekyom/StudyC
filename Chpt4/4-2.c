#include<stdio.h>

int main()
{
	double apple; //실수
	int banana;   //정수
	int orange;

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana); //연산자와 피연산자 모두 정수이므로 몫만 계산 : 2 실행
	printf("orange : %d\n", orange);

	return 0;
}