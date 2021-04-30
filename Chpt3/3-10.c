#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age;
	double height;

	printf("나이와 키를 입력하세요 : ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %.1lfcm입니다.\n", age, height);

	return 0;
}
//배열이름 : 주소이므로 배열명에는 주소연산자&를 붙이지 않는다