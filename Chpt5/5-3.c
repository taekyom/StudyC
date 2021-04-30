#include<stdio.h>

int main()
{
	int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}

	printf("b : %d\n", b);

	return 0;
}
//if()else if()else 와 if() if() if()는 같은 결과로 실행됨. 하지만 전자가 처리속도가 더 빠름(후자는 3번의 조건을 다 따지므로)