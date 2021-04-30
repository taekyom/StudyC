#include <stdio.h>

int main()
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;           //우선순위가 같으므로 왼쪽부터 차례대로 연산
	printf("res = %d\n", res);
	res = ++a * 3;
	printf("res = %d\n", res);
	res = a > b && a != 5;     //a > b의 결과와 a != 5의 결과를 &&
	printf("res = %d\n", res);
	res = a % 3 == 0;
	printf("res = %d\n", res);

	return 0;
}