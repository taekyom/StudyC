#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct vision //구조체 선언
{
	double left;
	double right;
};

struct vision exchange(struct vision robot); //시력을 바꾸는 함수
											 //매개변수와 반환형 모두 구조체(출력 : struct vision, 입력 : struct vision robot)

int main()
{
	struct vision robot; //구조체 변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right));
	robot = exchange(robot);                 //포인터없이 구조체변수를 불러오면 자동으로 2개의 값을 가져옴
	printf("바뀐 시력 : %.1lf %.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)  //구조체 반환 함수
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot; //구조체 변수 반환
}