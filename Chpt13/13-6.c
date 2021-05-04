#include<stdio.h>

void add_ten(int a);

int main()
{
	int a = 10;

	add_ten(a); //a값 복사해서 전달
	printf("a :%d\n", a);

	return 0;
}
void add_ten(int a) //main의 a와 다른 독립적인 저장 공간 할당
{
	a = a + 10; //a = 20
}