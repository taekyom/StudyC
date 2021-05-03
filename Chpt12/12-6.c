#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int age;
	char name[20];

	printf("나이 입력 : ");
	scanf("%d", &age);
	fgetc(stdin); //버퍼에서 하나의 문자를 제거하는 역할 → 제대로 출력되게 함(정수 → 문자 순으로 입력받을 때 문제 발생)

	printf("이름 입력 : ");
	gets(name);
	printf("나이 : %d, 이름 : %s\n", age, name);

	return 0;
}
//scanf()-getchar()-gets()-fgetc() : 입력 관련 함수
//printf()-putchar()-puts()-fputc() : 출력 관련 함수