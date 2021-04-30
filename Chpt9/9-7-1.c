#include<stdio.h>

void swap(int a, int b);

int main()
{
	int a = 10, b = 20;
	int temp;
	printf("바꾸기 전 a, b : %d, %d\n", a, b);

	temp = a;
	a = b;
	b = temp;
	printf("바뀐 후 a, b : %d, %d\n", a, b);
	return 0;
}

void swap(int a, int b)
{

}