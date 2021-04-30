#include <stdio.h>

int main()
{
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);       //a < 10이면 do{} 조건식을 반복, 반복이 끝나면 a 출력

	printf("a : %d\n", a);

	return 0;
}
//do~while문은 do안의 식을 무조건 한번 실행하고 참, 거짓 판별
//do~while문은 while문으로 변경 가능