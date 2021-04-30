#include <stdio.h>

void fruit();

int main()
{
	fruit();

	return 0;
}

void fruit()            //재귀호출함수 정의
{
	printf("apple\n");
	fruit();            //fruit(자기자신)을 다시 호출 → 무한 반복 출력
}
//재귀함수 : 자기 자신을 호출하는 함수(함수 안에서 자신을 호출하는 것)
//재귀함수에는 종료시키는 조건(기저조건)이 필요함(없으면 무한 반복)