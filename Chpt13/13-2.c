#include<stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{
		int temp;

		temp = a; //temp = 10
		a = b;    //a =20
		b = temp; //b=10
	}
	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);

	return 0;
}