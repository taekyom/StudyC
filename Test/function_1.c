#include<stdio.h>

void swap(int a, int b);

int main()
{
	int a = 10, b = 20;
	int temp;
	printf("�ٲٱ� �� a, b : %d, %d\n", a, b);

	temp = a;
	a = b;
	b = temp;
	printf("�ٲ� �� a, b : %d, %d\n", a, b);
	return 0;
}

void swap(int a, int b)
{

}