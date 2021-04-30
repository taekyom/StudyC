#include <stdio.h>

int main()
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != c);
	printf("a != c : %d\n", res);


	return 0;
}
//true : 1, false : 0 (컴퓨터는 0 이외의 값은 모두 참으로 생각 ex. -1도 참으로 간주)