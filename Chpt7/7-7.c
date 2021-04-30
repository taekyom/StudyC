#include<stdio.h>

void fruit(int count);

int main()
{
	fruit(1); //처음 호출 : 1을 줌

	return 0;
}

void fruit(int count)
{
	printf("apple\n");
	if (count == 3) return;

	fruit(count + 1);
	printf("jam\n"); //재귀호출 함수 : 최초 호출한 곳이 아닌 바로 이전에 호출한 곳으로 돌아감 → 그래서 printf("jam\n")이 출력
}