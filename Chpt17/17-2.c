#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct profile    //구조체 선언
{
	char name[20];
	int age;
	double height;
	char* intro;  //자기소개 포인터
};


int main()
{
	struct profile yuni;              //구조체 변수 선언

	strcpy(yuni.name, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.intro = (char*)malloc(80);   //자기소개를 저장할 공간을 동적으로 할당
	printf("자기소개 : ");
	gets(yuni.intro);                 //할당한 공간에 자기소개 입력

	printf("이름 : %s\n", yuni.name); //각 멤버 데이터 출력
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	free(yuni.intro);

	return 0;
}