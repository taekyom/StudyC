#include<stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp;

		temp = a; //temp = 10
		a = b;    //a =20
		b = temp; //b=10
	}
	printf("교환 후 a와 b의 값 : %d, %d\n", a, b);

	return 0;
}