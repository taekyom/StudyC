#include<stdio.h>

int main()
{
	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");

	return 0;
}
//배열이름 : 주소, 배열의 크기를 문자열의 크기보다 하나 크게 잡음
//배열 선언 시에만 대입연산자 사용 가능