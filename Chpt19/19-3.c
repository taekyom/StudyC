#include<stdio.h>
#define SUM(a, b)((a)+(b)) //두 값을 더하는 매크로 함수, 매크로 함수는 각 인수별로 괄호가 필요 → 원하는 결과 도출 가능
#define MUL(a, b)((a)*(b)) //두 값을 곱하는 매크로 함수
#define TEST(a)((a)*(10))

int main()
{
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));
	res = 30 / MUL(2, 5); //res 초기화
	printf("res : %d\n", res);
	printf("%d\n", TEST(a+10));

	return 0;
}