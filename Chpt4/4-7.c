#include <stdio.h>

int main()
{
	int a = 10, b = 20, res;

	a + b;
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b;
	printf("%d + %d = %d\n", a, b, res); //연산할 때 변수에 연산결과를 res에 저장한 이 방식을 사용하는 게 좋음, 계속해서 res 사용 가능

	return 0;
}
//실수 % 실수 연산은 불가능