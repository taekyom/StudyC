#include<stdio.h>

int main()
{
	char* dessert = "apple"; //*dessert 포인터에 apple을 초기화

	printf("오늘 후식은 %s입니다.\n", dessert);
	dessert = "banana";     //새로운 문자열 대입
	printf("내일 후식은 %s입니다.\n", dessert);
	return 0;
}