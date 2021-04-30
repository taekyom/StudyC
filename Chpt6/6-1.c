#include<stdio.h>

int main()
{
	int a = 1;

	while (a < 10)
	{
		a = a * 2;
	}

	printf("a : %d\n", a);

	return 0;
}
//while(1){} : 1을 넣으면 항상 참이므로 무한 반복됨