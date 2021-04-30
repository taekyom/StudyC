#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[20];
	int age;
	char address[50];

	printf("이름을 입력하세요 : ");
	scanf("%s", &name);
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("주소를 입력하세요 : ");
	scanf("%s", &address);
	printf("%s의 나이는 %d살이고, 주소는 %s입니다.\n", name, age, address);

	return 0;
}